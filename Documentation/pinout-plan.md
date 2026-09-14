# Plan pinów STM32G474VET6

Status: **wdrożony w STM32CubeMX 6.15.0 i zweryfikowany generacją kodu**.

## Pamięć i napęd

| Funkcja | Peryferium | Pin |
|---|---|---|
| PSRAM CLK / NCS | QUADSPI1 | PE10 / PE11 |
| PSRAM IO0–IO3 | QUADSPI1 | PE12–PE15 |
| ESC1–ESC4 DShot | TIM8_CH1–CH4 | PC6–PC9 |
| ESC1 telemetria | LPUART1_RX | PC0 |
| ESC2 telemetria | USART2_RX | PD6 |
| ESC3 telemetria | USART3_RX | PD9 |
| ESC4 telemetria | UART4_RX | PC11 |

Tryb asynchroniczny CubeMX rezerwuje również piny TX dla interfejsów telemetrii:
LPUART1_TX=PC1, USART2_TX=PD5, USART3_TX=PB10 i UART4_TX=PC10. Nie są one
wymagane przez odbiór telemetrii ESC i mogą pozostać niepodłączone lub trafić na
pola testowe PCB.

## Komunikacja i sensory cyfrowe

| Funkcja | Peryferium | Pin |
|---|---|---|
| Bluetooth TX/RX | UART5 | PC12 / PD2 |
| Wolny UART TX/RX | USART1 | PE0 / PE1 |
| ToF SDA/SCL | I2C2 | PA8 / PA9 |
| IMU SCK/MISO/MOSI | SPI4 | PE2 / PE5 / PE6 |
| IMU CS/INT1/INT2 | GPIO | PE3 / PE4 / PF2 |
| OLED SCK/MOSI | SPI2 | PB13 / PB15 |
| OLED CS/DC/RST | GPIO | PB12 / PD0 / PD1 |
| Wolny pełny SPI | SPI1 | PA4–PA7 |

Osiem sensorów ToF należy rozdzielić przez TCA9548A: kanały 0–4 dla VL53,
kanały 5–7 dla Benewake. Reset multipleksera: PB1. Dla trzech TF-Luna sygnały
DATA_READY: PA1–PA3.

## Analog i funkcje pomocnicze

| Funkcja | Peryferium | Pin |
|---|---|---|
| TCRT1–TCRT3 | ADC3 | PE7–PE9 |
| TCRT4–TCRT8 | ADC3 | PD10–PD14 |
| VBAT_SENSE | ADC1_IN15 | PB0 |
| CURRENT_SENSE | ADC2_IN12 | PB2 |
| TSOP4838 | TIM2_CH1 input capture | PA0 |
| Buzzer | TIM4_CH4 PWM | PD15 |
| LED testowa | GPIO | PB6 |
| USB DM/DP | USB FS | PA11 / PA12 |
| SWDIO/SWCLK | SYS | PA13 / PA14 |

PF0/PF1 pozostają zarezerwowane dla HSE. PB8 pozostaje jako BOOT0/test pad.

## Parametry bazowe

- HSE: 8 MHz, PLL: 170 MHz; HSI48 zasila domenę USB;
- I2C2: Fast Mode 400 kHz;
- ADC3: skan 8 kanałów, kolejność TCRT1–TCRT8, próbkowanie 47,5 cyklu;
- QSPI: rozmiar adresowy 8 MiB (`FlashSize=22`), preskaler 1;
- SPI2 i SPI4: początkowo 5,3125 MHz przy zegarze 170 MHz;
- TIM8 ma cztery wyjścia PWM przygotowane pod DShot;
- TIM2_CH1 pracuje jako input capture dla TSOP4838;
- TIM4_CH4 jest wyjściem PWM buzzera;
- po `MX_GPIO_Init()` linie `IMU_CS`, `OLED_CS`, `OLED_RESET` i
  `TOF_MUX_RESET` startują w stanie wysokim, natomiast `TEST_LED` i `OLED_DC`
  w stanie niskim.

DMA, priorytety przerwań i docelowe parametry czasowe DShot zostaną dobrane
razem z pierwszą nieblokującą warstwą sterowników. Na tym etapie nie uruchamia
się wyjść PWM ani transmisji do ESC.
