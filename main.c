#include <stdio.h>
#include "challenges/1.c"
#include "challenges/2.c"
#include "challenges/3.c"

int main() {
    printf("RILEYDEMAN C PROGRAM\n");
    printf("Welcome to the C program from rileydeman\n");
    printf("%s\n", "This program you can run challenges that rileydeman did in week 5 of 2025 (27/01/2025 - 31/01/2025) at GLU!\n");

    printf("%s\n", "What challenge do you want to run?");

    int challenge;

    if (scanf("%d", &challenge) != 1) {
        printf("ERROR: Invalid input at the get challenge question. Please enter an integer.\n");
        return 422;
    }

    if (challenge == 1) {
        calc();
    } else if (challenge == 2) {
        countChars();
    } else if(challenge == 3) {
        readFile();
    } else {
        char message[50];
        sprintf(message, "ERROR: Challenge %d not found!", challenge);
        printf(message);
    }
}