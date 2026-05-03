# Small Port Scanner 🕵️‍♂️🚀

Ein entspanntes, kleines C++ Skript, um in die Welt der Netzwerke einzusteigen. 💻
Es checkt einfach nur, ob eine bestimmte "Tür" (Port 80) auf dem eigenen Rechner (127.0.0.1) offen oder verschlossen ist. Kein unnötiger Ballast, einfach nur purer Code, der genau das macht, was er soll. ✨

## Was das Skript macht 🛠️
- **Netzwerk-Check:** Baut eine einfache TCP-Verbindung zum eigenen Rechner auf. 🔌
- **Anklopfen:** Checkt gezielt Port 80. 🚪
- **Feedback:** Sagt dir im Terminal, ob jemand die Tür aufmacht (OFFEN ✅) oder nicht (GESCHLOSSEN ❌).

## So benutzt du es ⌨️

Öffne dein Terminal und lade dir den Code runter. Da es in C++ geschrieben ist, nutzen wir `g++` zum Übersetzen.

**1. Kompilieren (Übersetzen):** 🛠️
`g++ small_port_scanner.cpp -o scanner`

**2. Starten:** 🏁
`./scanner`

