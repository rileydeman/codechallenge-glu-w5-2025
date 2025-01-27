#include <stdio.h>
#include <string.h>

int stepCounter() {
  printf("\n%s\n", "STEP COUNTER\n");

  char input[5000];

  printf("%s\n", "Please enter your steps (> = forward, < = backward):");
  scanf("%s", &input);

  printf("Your input is: %s\n", &input);

  int currentStep = 0;
  int stepsForward = 0;
  int stepsBackward = 0;

  for (int i = 0; i < strlen(&input); i++) {
    if (input[i] == '>') {
      stepsForward++;
      currentStep++;
    } else if (input[i] == '<') {
      stepsBackward++;
      currentStep--;
    }
  }

  printf("Steps forward: %d\n", stepsForward);
  printf("Steps backward: %d\n", stepsBackward);

  if (currentStep > 0) {
    printf("Steps count: +%d\n", currentStep);
  } else if (currentStep <= 0) {
    printf("Steps count: %d\n", currentStep);
  }

}