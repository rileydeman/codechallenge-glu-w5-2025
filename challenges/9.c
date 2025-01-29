#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkClosest() {
  printf("\n%s\n", "CHECK CLOSEST NUMBER\n");
  printf("%s\n", "You will fill in some numbers and the system will check which of those are the closest to each other.");
  printf("%s\n", "The program will ask you for numbers for multiple times, when you like to stop the progress fill in 's' and then will the system check every number and will let you know which of those are the closest.");
  printf("\n%s\n", "Do you want to start the progress? (y = yes, n = no)");

  char choice1;
  scanf(" %c", &choice1);

  if (choice1 == 'y') {
    printf("\n%s\n", "The challenge will start now!");

    int runQuestions = 1;
    int index = 0;
    int numbers[5000];

    while (runQuestions == 1) {
      while (getchar() != '\n' && getchar() != EOF);

      char currentNumber[10];
      if (index + 1 == 1) {
        sprintf(currentNumber, "%dst", index + 1);
      } else if (index + 1 == 2) {
        sprintf(currentNumber, "%dnd", index + 1);
      } else if (index + 1 == 3) {
        sprintf(currentNumber, "%drd", index + 1);
      } else {
        sprintf(currentNumber, "%dth", index + 1);
      }

      printf("\nWhat will be your %s number?\n", currentNumber);

      char input[100];
      scanf("%s", input);

      if (strcmp(input, "s") == 0) {
        runQuestions = 0;
      } else {
        numbers[index] = atoi(input);
        index++;
      }
    }

    printf("\nSystem will now check which of those %d numbers are the closest to each other!\n", index);

    char input[5000];

    for (int i = 0; i < index; i++) {
      if (i == 0) {
        sprintf(input, "%s", "Your input:");
      }

      sprintf(input, "%s %d", input, numbers[i]);
    }

    printf("%s\n", input);

    int num1 = numbers[0];
    int num2 = numbers[1];
    int minDiff = abs(num1 - num2);

    if (runQuestions == 0) {
      for (int i = 0; i < index; i++) {
        for (int j = 0; j < i; j++) {
          int diff = abs(numbers[i] - numbers[j]);

          if (diff < minDiff) {
            minDiff = diff;
            num1 = numbers[i];
            num2 = numbers[j];
          }
        }
      }
    }

    printf("\nThe numbers `%d` and `%d` are the closest to each other!\n", num1, num2);

  } else if (choice1 == 'n') {
    printf("\n%s\n", "Challenge will terminate now.");
  }
}
