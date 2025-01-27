#include <stdio.h>
#include "challenges/1.c"

int main() {
    int challenge;

    printf("%s\n", "What challenge do you want to run?");

    if (scanf("%d", &challenge) != 1) {
        printf("Error: Invalid input at the get challenge question. Please enter an integer.\n");
        return 422;
    }

    if (challenge == 1) {
        calc();
    }
}