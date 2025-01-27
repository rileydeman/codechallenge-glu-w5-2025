#include <stdio.h>

int calc() {
    int num1;
    int num2;

    printf("%s\n", "CALCULATOR");
    printf("\n");

    printf("%s\n", "Please enter a number: ");

    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input at the first input. Please enter an integer.\n");
        return 422;
    }

    char message1[50];
    sprintf(message1, "What number do you want to add to %d?", num1);
    printf("%s\n", message1);

    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input at the second input. Please enter an integer.\n");
        return 422;
    }

    int num3 = num1 + num2;

    char message2[50];
    sprintf(message2, "The answer is %d", num3);
    printf("%s\n", message2);

    return 200;
}
