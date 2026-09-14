# Aktualny stan projektu

Data rozpoczęcia repozytorium roboczego: 2026-09-14.

## Potwierdzone

- główny MCU: STM32G474VET6, LQFP100;
- istnieje bazowy projekt STM32CubeIDE `STM32G474VET6-module-board`;
- projekt został utworzony z pakietem STM32Cube FW_G4 V1.6.3;
- wybrano 4× DShot, 4× osobną telemetrię ESC, QSPI PSRAM, IMU, OLED,
  sensory ToF, czujniki linii, Bluetooth i START/STOP IR.

## Stan pliku IOC

Plik `.ioc` jest niekompletnym szkicem. Zawiera QSPI na PE10–PE15 oraz trzy
kanały TIM8 na PC6–PC8, ale PC9 jest błędnie przypisany do TIM3_CH4. Plik zawiera
`isbadioc=true`, a konfiguracja peryferiów nie została wygenerowana do kodu.

## Najbliższy etap

1. Naprawić spójność `.ioc`.
2. Zastosować i zweryfikować plan pinów.
3. Skonfigurować zegary, DMA i przerwania bez generowania logiki aplikacyjnej.
4. Wygenerować projekt i wykonać pierwszy czysty build Debug.
