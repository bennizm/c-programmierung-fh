
/**
 * Schere-Stein-Papüüür
 */

#include <stdio.h>
#include <stdlib.h>

#define SCISSOR 0
#define ROCK 1
#define PAPER 2

int computerChoiceRandom() {
    int M = 0;
    int N = 2;
    return M + rand() / (RAND_MAX / (N - M + 1) + 1);
}

void ssp(int wins, int losses) {
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