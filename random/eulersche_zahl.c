
#include <stdio.h>

/**
 * Eulersche Zahl berechnen
 * @param n Rechenoperationswiederholung
 * @return Annähernde Eulersche Zahl mit Genauigkeit abhängig von @param n
 */
double calcE(int n) {
    double e = 1;
    double temp;

    for (int i = 1; i <= n; i++) {
        temp = 1;
        for (int j = i; j > 1; j--) {
            temp *= j;
        }
        temp = 1/temp;
        e += temp;
    }
    return e;
}

int main() {
    int n = 0;

    printf(
        "Willkommen zur natuerlichen Berechnung der Eulerschen Zahl\n"
        "Falls du wissen moechtest, wie die Eulersche Zahl berechnet wird, findest du einen interessanten Artikel im Internetz\n"
        "Wie genau soll die Eulersche Zahl berechnet werden?\n"
        "Mit deiner Eingabe bestimmst du die Anzahl der Rechenoperationswiederholungen\n"
        "(Bitte beachte, dass mit steigender Wiederholung die Dauer der Berechnung exponentiell ansteigen\n"
        "und das Ergebnis aufgrund von Floating-Point-Rundungsfehlern abweichen kann)\n"
        "Eingabe: ");
    scanf("%d", &n);

    printf("\n\nwird berechnet...\n\n\n");
    double e = calcE(n);

    printf("Auf 50 Nachkommastellen gerundet:\n");
    printf("(ist tatsaechlich (Quelle: Google)) e = 2.71828182845904523536028747135266249775724709369995\n");
    printf("(berechnet)                         e = %.50lf ", e);
    printf("(%d Wiederholungen)", n);
}