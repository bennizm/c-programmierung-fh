#include <stdio.h>

void canIWork() {
    int age = 0;
    printf("Gib dein Alter ein:\n");
    scanf("%d", &age);
    printf("\n");
    if(age >= 18 && age <= 65) {
        printf("Such da a hockn du faula sack");
    } else {
        if (age < 18) {
            printf("ab in die Schule mit dir");
        } else {
            printf("Geniesse deine Pension");
        }
    }
}

int main() {
    canIWork();
    return 0;
}