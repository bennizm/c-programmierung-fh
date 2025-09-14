/*
 * Schere-Stein-Papüüüür
 */

/**
 * hier werden die libraries includiert die benötigt werden.
 * <stdio.h> braucht man für printf und scanf.
 * <stdlib.h> braucht man für die methode rand() zur zufallsgenerierung.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * hier werden die konstanten definiert.
 * schere "SCISSOR", stein "ROCK" und papier "PAPER" denen jeweils "0", "1" und "2" zugewiesen werden.
 * das wird gemacht, damit jeder der drei formen quasi ein einheitlicher wert bzw "id" zugewiesen wird,
 * da man im programmcode ja nicht mit den worten scissor und so arbeiten kann.
 */
#define SCISSOR 0
#define ROCK 1
#define PAPER 2

/**
 * hier wird eine zufällige zahl zwischen 0 und 2 generiert mittels rand() und einer art "formel" die
 * die zufallszahlen eingrenzt, da die methode rand() ansich nicht über parameter definiert werden kann.
 * sie gibt nämlich eine zahl zwischen 0 und RAND_MAX zurück.
 * int M bildet das minimum
 * int N bildet das maximum
 * @return eine zufallszahl zwischen 0 und 2, die der computer "spielt"
 */
int computerChoiceRandom() {
    int M = 0;
    int N = 2;
    return M + rand() / (RAND_MAX / (N - M + 1) + 1);
}

/**
 * hier findet das eigentliche spiel statt.
 * es handelt sich dabei um eine rekursive methode, die solang wiederholt wird, solange der spieler
 * eine zahl eingibt, die nicht -1 ist, dann wird das spiel beendet und damit das programm.
 * genauere erklärungen folgen.
 * @param wins die anzahl der gewinne des spielers
 * @param losses die anzahl wie oft der spieler verkackt hat
 */
void ssp(int wins, int losses) {
    //TODO: Erklärung für alles folgende bin schon zu müde heut DAMN
    const char * literals[] = {
        "Schere",
        "Stein",
        "Papier"
    };


    int computerChoice = computerChoiceRandom();
    int playerChoice;

    printf(
        "Willkommen bei Schere-Stein-Papier\n"
            "Gib \"0\" fuer schere, \"1\" fuer stein oder \"2\" fuer papier ein "
            "und lasse dein Glueck fuer dich entscheiden\n"
            "Dein Aktueller Spielstand:\n"
            "%dx gewonnen!\n"
            "%dx verloren.\n", wins, losses);
    scanf("%d", &playerChoice);



    if (playerChoice == -1) {
        printf("Spiel beendet\nTschau mit Au\n");
        return;
    }

    printf(
        "Du entscheidest dich fuer %s\n"
        "Computer entscheidet sich fuer %s\n",
        playerChoice >= 0 && playerChoice <=2 ? literals[playerChoice] : "eine Zahl die es nicht gibt\nWas fuer ein Schwachsinn", literals[computerChoice]
        );

    printf("\nStatus:\n");
    if(playerChoice == computerChoice) {
        printf("unentschieden 8=====D\n");
    } else {
        if(
            (playerChoice == SCISSOR && computerChoice == PAPER) ||
            (playerChoice == ROCK && computerChoice == SCISSOR) ||
            (playerChoice == PAPER && computerChoice == ROCK)
            ) {
                printf(">>> gewonnen! <<<\n");
                wins++;
            } else {
                printf("verloren :c\n");
                losses++;
            }
    }
    printf("------------------------------\n\n");
    ssp(wins, losses);
}

int main() {
    ssp(0, 0);
}