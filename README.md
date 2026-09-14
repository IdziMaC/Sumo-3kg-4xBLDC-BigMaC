# Sumo 3 kg 4×BLDC BigMaC

Główne repozytorium całego projektu czterokołowego robota Mega Sumo 3 kg.
Obejmuje firmware STM32, elektronikę, PCB, mechanikę 3D, dokumentację i materiały
referencyjne.

## Założenia projektu

- 4× silnik Rhino Crawler RM-S20 1450 KV BLDC;
- 4× ESC NeutronRC 70A-G071 V2;
- sterownik STM32G474VET6 w obudowie LQFP100;
- osobne sterowanie DShot i telemetria każdego ESC;
- 5× VL53 oraz 3× Benewake;
- 8× analogowy czujnik linii TCRT5000;
- IMU ISM330DHCXTR, OLED, Bluetooth JDY-33 i odbiornik START/STOP TSOP4838;
- zasilanie robota z pakietu 3S.

## Struktura

- `Firmware/` — projekty STM32CubeIDE i kod mikrokontrolerów;
- `Hardware/` — schematy, PCB, BOM i dokumentacja elementów;
- `Mechanical/` — modele źródłowe CAD, eksporty i rysunki;
- `Documentation/` — architektura, decyzje i aktualny stan projektu;
- `Reference/` — materiały porównawcze i rozwiązania dawców;
- `Tools/` — repozytoryjne narzędzia pomocnicze;
- `Tests/` — procedury i wyniki testów.

## Rozpoczęcie pracy z firmware

Projekt CubeIDE znajduje się w
`Firmware/STM32G474VET6-module-board`. Importuj go jako istniejący projekt,
bez kopiowania do innego workspace. Plik `.ioc` jest obecnie szkicem i wymaga
uporządkowania pinów oraz ponownego wygenerowania konfiguracji.

Duże pliki CAD są śledzone przez Git LFS. Po świeżym klonie wykonaj
`git lfs install`.

## Bezpieczeństwo

Budowanie i analiza są dozwolone bez sprzętu. Flashowanie, uruchamianie DShot,
silników lub aktywnego testu napędu wymaga jawnej zgody operatora.
