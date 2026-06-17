# Quest Companion Firmware

Firmware für den persönlichen Quest Companion auf dem Waveshare ESP32-S3-Touch-AMOLED-1.75-B.

Aktueller Stand: `v0.3 Display Framework`.

## Ziel von v0.3

Dieser Stand fügt keine neuen Produktfunktionen hinzu. Er macht aus dem bisherigen Display-Proof-of-Life ein kleines, wartbares Firmwareprojekt.

Nach dem Flashen zeigt das Gerät weiterhin nur einen schwarzen AMOLED-Hintergrund mit einem einfachen Pflanzen-Companion als Testbild.

## Projektstruktur

```text
QuestCompanion/
├── QuestCompanion.ino
├── README.md
└── src/
    ├── app.cpp
    ├── app.h
    ├── config.h
    ├── display.cpp
    ├── display.h
    ├── security.cpp
    └── security.h
```

## Dateien

- `QuestCompanion.ino`: Arduino-IDE-Einstiegspunkt. Delegiert sofort an die Firmware-Schicht.
- `src/app.cpp` / `src/app.h`: Startet Serial, Security und Display. Enthält die zentrale Firmware-Ablauflogik für v0.3.
- `src/config.h`: Zentrale Konstanten für Projektname, Version, Displaygröße, Pins, Farben, Timing und Testbild-Geometrie.
- `src/display.cpp` / `src/display.h`: Einzige Stelle, die direkt mit `Arduino_GFX_Library` arbeitet. Alle Displayzugriffe laufen über diese API.
- `src/security.cpp` / `src/security.h`: Deaktiviert WiFi und Bluetooth beim Start.

## Benötigte Arduino-Komponenten

1. Arduino IDE 2.x
2. Espressif ESP32 Board Package
3. Arduino_GFX_Library

Keine weiteren Libraries verwenden.

Nicht verwenden:

- Waveshare Libraries
- Waveshare Demo Code
- LVGL
- Touch Libraries
- Audio Libraries
- Cloud-, OTA- oder Telemetrie-Bibliotheken

## Arduino IDE einrichten

1. Arduino IDE öffnen.
2. `Datei` → `Öffnen...` wählen.
3. Die Datei `QuestCompanion.ino` aus diesem Ordner öffnen.
4. Unter `Werkzeuge` → `Board` ein ESP32-S3 Board auswählen. Falls kein exakter Waveshare-Eintrag vorhanden ist, ein passendes ESP32-S3 Dev Module verwenden.
5. Wichtige Board-Optionen setzen:
   - USB CDC On Boot: `Enabled`
   - Flash Size: `16MB`
   - PSRAM: `OPI PSRAM` oder passende ESP32-S3-PSRAM-Option
   - Upload Mode: USB-CDC/JTAG oder die für dein Setup funktionierende Option
6. Port unter `Werkzeuge` → `Port` auswählen.
7. `Sketch` → `Überprüfen/Kompilieren` ausführen.
8. Danach `Sketch` → `Hochladen` ausführen.
9. Serial Monitor mit `115200 Baud` öffnen.

## Erwartetes Verhalten

Im Serial Monitor erscheint:

```text
Quest Companion
v0.3 Display Framework
Display framework ready
```

Auf dem Display erscheint:

- schwarzer Hintergrund
- einfache kleine Pflanzenform in der Mitte
- keine Buttons
- kein Menü
- keine Touch-Funktion
- keine Animation
- keine WLAN- oder Bluetooth-Funktion

## Hinweise für den nächsten Schritt

Wenn dieses Bild stabil auf dem Board erscheint, ist v0.3 abgeschlossen. Danach kann als nächster kleiner Meilenstein der Companion grafisch verfeinert werden.

Für v0.3 werden keine externen Grafiken benötigt.
