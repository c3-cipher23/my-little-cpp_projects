#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    
    int mein_socket;
    struct sockaddr_in ziel_adresse;

    int ziel_port = 80;

    printf("Starte Scan auf 127.0.0.1 fuer Port %d...\n", ziel_port);

    // Beantragt einen Netzwerk-Zugang (Socket) beim Betriebssystem.
    mein_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (mein_socket < 0) {
        printf("Fehler beim Erstellen des Sockets.\n");
        return 1;
    }

    // Ziel-Daten eintragen und IP/Port für das Netzwerk passend übersetzen.
    ziel_adresse.sin_family = AF_INET;
    ziel_adresse.sin_port = htons(ziel_port);
    inet_pton(AF_INET, "127.0.0.1", &ziel_adresse.sin_addr);

    // Versucht, die eigentliche Verbindung zum Ziel aufzubauen.
    int ergebnis = connect(mein_socket, (struct sockaddr *)&ziel_adresse, sizeof(ziel_adresse));

    // Ergebnis prüfen: 0 bedeutet, der Verbindungsaufbau hat geklappt.
    if (ergebnis == 0) {
        printf("Status: OFFEN\n");
    } else {
        printf("Status: GESCHLOSSEN\n");
    }

    // Den Zugang am Ende wieder schließen und aufräumen.
    close(mein_socket);

    printf("Scan beendet.\n");
    return 0;
}
