# Architektura projektu

## Zakres repozytorium

Repozytorium obejmuje cały robot: mechanikę, elektronikę i firmware. Główna PCB
jest centralnym sterownikiem i koncentratorem sensorów. Prądy silników nie powinny
przechodzić przez sekcję logiczną PCB.

## Główne bloki

1. STM32G474VET6 zarządza napędem, sensorami i bezpieczeństwem.
2. Cztery ESC otrzymują niezależne DShot i zwracają niezależną telemetrię.
3. Osiem sensorów ToF korzysta z jednej magistrali MCU przez multiplekser I2C.
4. Osiem czujników linii jest próbkowanych przez ADC.
5. IMU pracuje po SPI, a komunikacja operatorska przez Bluetooth i USB.
6. Logika 3,3 V i sensory mają osobne, filtrowane zasilanie względem toru mocy.

## Granice bezpieczeństwa

Firmware ma oddzielać transport sprzętowy, snapshoty sensorów, strategię i napęd.
Brak lub przeterminowanie danych sensora nie może blokować wykonywania programu ani
być interpretowane jako prawidłowy pomiar zerowy.
