#include <ctype.h>
#include <stdio.h>
#include <string.h>

int countUpperCase(const char *string) {
  int count = 0;

  for (int i = 0; i < strlen(string); i++) {
    if (isupper(string[i])) {
      count++;
    }
  }

  return count;
}

int countChars() {
  char msg[10000];

  printf("%s\n", "COUNT CHARACTERS IN A STRING");
  printf("\n");

  while (getchar() != '\n' && getchar() != EOF);

  printf("%s\n", "Enter a word or sentence:");
  fgets(msg, sizeof(msg), stdin);

  int charsInMsg = strlen(msg);
  int totalUpperCase = countUpperCase(msg);

  printf("Your input: %s \n", msg);
  printf("Total characters: %d \n", charsInMsg);
  printf("Total uppercase letters: %d \n", totalUpperCase);
}