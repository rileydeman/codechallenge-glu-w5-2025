#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void checkClosest() {
  printf("\n%s\n", "CHECK CLOSEST NUMBER\n");
  printf("%s\n", "You will fill in some numbers and the system will check which of those are the closest to each other.");
  printf("%s\n", "The program will ask you for numbers for multiple times, when you like to stop the progress fill in 's' and then will the system check every number and will let you know which of those are the closest.");
  printf("\n%s\n", "Do you want to start the progress? (y = yes, n = no)");

  char choice1;
  scanf(" %c", &choice1);  // Corrected

  if (choice1 == 'y') {
    printf("\n%s\n", "The challenge will start now!");

    int runQuestions = 1;
    int i = 0;
    int numbers[5000];

    while (runQuestions == 1) {
      while (getchar() != '\n' && getchar() != EOF);

      char currentNumber[10];  // Fixed buffer size
      sprintf(currentNumber, "%dth", i + 1);

      printf("\nWhat will be your %s number?\n", currentNumber);

      char input[100];
      scanf("%s", input);

      if (strcmp(input, "s") == 0) {
        runQuestions = 0;
      } else {
        numbers[i] = atoi(input);
        i++;
      }
    }

    printf("\n%s\n", "System will now check the");

    if (runQuestions == 0) {

    }

  } else if (choice1 == 'n') {
    printf("\n%s\n", "Challenge will terminate now.");
  }
}
