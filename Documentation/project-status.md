# Aktualny stan projektu

Data rozpoczęcia repozytorium roboczego: 2026-09-14.

## Potwierdzone

- główny MCU: STM32G474VET6, LQFP100;
- istnieje bazowy projekt STM32CubeIDE `STM32G474VET6-module-board`;
- projekt został utworzony z pakietem STM32Cube FW_G4 V1.6.3;
- wybrano 4× DShot, 4× osobną telemetrię ESC, QSPI PSRAM, IMU, OLED,
  sensory ToF, czujniki linii, Bluetooth i START/STOP IR.

## Stan pliku IOC

Plik `.ioc` został naprawiony i rozszerzony zgodnie z
`Documentation/pinout-plan.md`. Błędne `PC9=TIM3_CH4` zastąpiono
`PC9=TIM8_CH4`; usunięto stan `isbadioc=true`. CubeMX 6.15.0 potwierdza:

- `Pinout & Configuration Error: false`;
- `Clock Configuration Error: false`;
- poprawną generację kodu dla wszystkich aktywnych peryferiów.

Konfiguracja zakłada HSE 8 MHz i PLL 170 MHz, a domena USB korzysta z HSI48.
Skonfigurowano QSPI, ADC1/2/3, I2C2, SPI1/2/4, TIM2/4/8, USB oraz sześć
interfejsów UART. ADC3 generuje sekwencję ośmiu kanałów TCRT.

Kod inicjalizacyjny został wygenerowany, a brakujące moduły oficjalnego HAL/LL
uzupełniono z lokalnego pakietu STM32CubeG4 1.6.3.
Stany początkowe linii CS i resetów urządzeń zewnętrznych ustawiono bezpiecznie:
IMU, OLED i multiplekser ToF pozostają nieaktywne po inicjalizacji GPIO.

## Weryfikacja

- czysty build `Debug` w STM32CubeIDE 1.19.0: **0 błędów, 0 ostrzeżeń**;
- wynik: 30 004 B kodu, 12 B danych inicjalizowanych i 4 204 B BSS;
- nie wykonywano flashowania ani testów silników.

## Najbliższy etap

1. Potwierdzić na schemacie PCB częstotliwość rezonatora HSE 8 MHz oraz wyprowadzenia dodatkowych pinów TX telemetrii.
2. Dodać DMA i przerwania dla TIM8/DShot, ADC3 oraz odbioru telemetrii UART.
3. Dodać nieblokujące sterowniki TCA9548A i czujników ToF.
4. Dodać inicjalizację i test pamięci APS6404L bez włączania napędu.
