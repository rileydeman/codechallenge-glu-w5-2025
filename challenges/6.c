#include <stdio.h>


int checkBrackets() {
  printf("%s\n", "BRACKETS CHECKER\n");

  char code[1000];

  while (getchar() != '\n' && getchar() != EOF);

  printf("%s\n", "Enter short code:");
  fgets(code, sizeof(code), stdin);

  printf("Your input: %s\n", code);

  int openBracket = 0;
  int closedBracket = 0;

  for (int i = 0; i < strlen(&code); i++) {
    if (code[i] == '(') {
      openBracket++;
    } else if (code[i] == ')') {
      closedBracket++;
    }
  }

  if (openBracket == closedBracket) {
    printf("No problem found!\n");
  } else if (openBracket > closedBracket) {
    printf("There is a bracket missing!\n");
  } else if (openBracket < closedBracket) {
    printf("A bracket is closing too early!\n");
  }
}