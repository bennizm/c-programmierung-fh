//
// Created by Benjamin Zimmermann on 15.10.2025.
//

#include <stdio.h>
#include <stdlib.h>

void ex01u02(void) {
    float a = 0, b = 0;
    printf("Geben Sie zwei Zahlen ein die Sie addieren möchten\n");
    printf("Zahl 1:");
    scanf("%f", &a);
    printf("Zahl 2:");
    scanf("%f", &b);
    printf("Das Ergebnis lautet: %.2f + %.2f = %.2f", a, b, a + b);
}

void ex03(void) {

}

void ex04(void) {
    int a = 0, b = 0;
    printf("Geben Sie zwei Zahlen ein:\n");
    printf("Zahl a:");
    scanf("%d", &a);
    printf("Zahl b:");
    scanf("%d", &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a = %d, b = %d\n", a, b);

}

void ex05(void) {
    char s[4];
    int sum = 0;
    scanf("%s", &s);
    for (int i = 0; i < sizeof(s); i++) {
        if((int)s[i] >= 48 && (int)s[i] <= 57) {
            sum += (int)s[i] - 48;
        }
    }
    printf("%d", sum);
}

void ex06(void) {
    int tag = 0;
    int monat = 0;
    int jahr = 0;
    printf("Datumsvalidierung\n");
    printf("Tag:");
    scanf("%d", &tag);
    printf("Monat:");
    scanf("%d", &monat);
    printf("Jahr:");
    scanf("%d", &jahr);
    printf("Datum: %d.%d.%d\n", tag, monat, jahr);
    if (tag >= 1 && tag <= 31 && monat >= 1 && monat <= 12 && jahr >= 1 && jahr <= 9999) {
        printf("Valides Datum\n");
    } else {
        if (tag < 1 || tag > 31) {
            printf("nicht-konformer Tag\n");
        }
        if (monat < 1 || monat > 12) {
            printf("nicht-konformer Monat\n");
        }
        if (jahr < 1 || jahr > 9999) {
            printf("nicht-konformes Jahr\n");
        }
    }

}

int main(void) {
    //ex01u02();
    //ex04();
    //ex05();
    ex06();
    return 0;
}
