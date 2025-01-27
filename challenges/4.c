#include <stdio.h>

int pyramid() {
    printf("\n%s\n", "PYRAMID\n");

    int height;

    printf("%s\n", "What would you like that the height from the pyramid will be?");

    if(scanf("%d", &height) != 1) {
        printf("%s\n", "ERROR: Invalid input at the first input. Please enter an integer.\n");
        pyramid();
    }

    if (height < 3 || height > 20) {
        printf("ERROR: Please fill in a number between 3 and 20.\n");
        pyramid();
    }

    for (int i = 1; i <= height; i++) {

        for (int j = 1; j <= height - i; j++) {
            printf(".");
        }

        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        printf("#\n");
    }
}