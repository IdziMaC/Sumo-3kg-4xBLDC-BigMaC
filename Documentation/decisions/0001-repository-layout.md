# ADR-0001: Jedno repozytorium całego robota

## Status

Zaakceptowane 2026-09-14.

## Decyzja

Firmware, elektronika, mechanika i dokumentacja robota są utrzymywane w jednym
repozytorium. Każda dziedzina ma oddzielny katalog najwyższego poziomu, a duże
pliki CAD są obsługiwane przez Git LFS.

## Uzasadnienie

Zmiana geometrii wpływa na PCB, sensory i firmware. Wspólne repozytorium pozwala
związać zgodne rewizje wszystkich tych elementów jednym commitem lub tagiem.

## Konsekwencje

- należy pilnować wielkości plików i używać Git LFS;
- buildy i pliki tymczasowe nie mogą trafiać do repozytorium;
- dokumentacja musi wskazywać, czy opisuje plan, czy stan wdrożony.
