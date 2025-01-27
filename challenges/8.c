#include <stdio.h>

char decodeMorse(const char morse[]) {

}

int morse() {
  printf("\n%s\n", "DECODE MORSE\n");

  char morseMsg[10000];

  while (getchar() != '\n' && getchar() != EOF);

  printf("%s\n", "Enter morse message:");
  fgets(morseMsg, sizeof(morseMsg), stdin);

  printf("Your input: %s\n", morseMsg);
}