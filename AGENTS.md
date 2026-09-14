# Instrukcje pracy w repozytorium BigMaC

## Źródło prawdy

- Głównym repozytorium tego projektu jest cały katalog zawierający ten plik.
- Firmware STM32 znajduje się w `Firmware/STM32G474VET6-module-board`.
- Przed pracą sprawdź `git status --short --branch`, ostatnie commity oraz
  `Documentation/README.md` i `Documentation/project-status.md`.
- Istniejące lokalne zmiany należą do użytkownika. Nie usuwaj ich ani nie
  przywracaj bez jednoznacznej zgody.

## Organizacja

- Kod i pliki CubeIDE trzymaj wyłącznie w `Firmware/`.
- Schematy, projekty PCB i BOM trzymaj w `Hardware/`.
- Natywne modele CAD zapisuj w `Mechanical/CAD`, eksporty w
  `Mechanical/Exports`, a rysunki w `Mechanical/Drawings`.
- Nowe decyzje projektowe dokumentuj w `Documentation/decisions/`.
- Nie commituj katalogów `Debug`, `Release` ani plików tymczasowych.
- Duże pliki CAD obsługuj przez Git LFS zgodnie z `.gitattributes`.

## Firmware i bezpieczeństwo

- `StartModule` ma pozostać jedynym autorytetem zezwalającym na start walki.
- Logika strategii nie może bezpośrednio wykonywać HAL ani sterować pinami.
- Runtime ma być nieblokujący; sensory publikują dane ze statusem ważności i
  timestampem.
- Nie uruchamiaj ARM, DRIVE, DShot ani silników bez jawnej zgody operatora.
- Nie flashuj firmware bez jawnego polecenia użytkownika.
- Komentarze objaśniające pisz po polsku, a identyfikatory kodu po angielsku.

## Git

- Jeden niezależny temat zamykaj w jednym logicznym commicie z dokumentacją.
- Przed commitem wykonaj odpowiednią walidację i `git diff --check`.
- Nie przepisuj historii i nie stosuj destrukcyjnego resetu.
- Push wykonuj tylko wtedy, gdy użytkownik wyraźnie objął nim bieżący zakres.
