#include <stdio.h>
#include <string.h>

struct morseCode {
  char *code;
  char letter;
};

void decodeMorse(const char morse[]) {
  struct morseCode morseCodes[] = {
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
    {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
    {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
    {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
    {"--..", 'Z'}, {"-----", '0'}, {".----", '1'}, {"..---", '2'},
    {"...--", '3'}, {"....-", '4'}, {".....", '5'}, {"-....", '6'},
    {"--...", '7'}, {"---..", '8'}, {"----.", '9'}
  };

  char letterInMorse[15] = "";
  char decodedMsg[1000] = "";
  int letterIndex = 0;

  for (int i = 0; morse[i] != '\0'; i++) {
    if (morse[i] != ' ' && morse[i] != '/') {
      letterInMorse[letterIndex++] = morse[i];
      letterInMorse[letterIndex] = '\0';
    } else {
      if (letterIndex > 0) {
        for (int j = 0; j < sizeof(morseCodes) / sizeof(morseCodes[0]); j++) {
          if (strcmp(letterInMorse, morseCodes[j].code) == 0) {
            strncat(decodedMsg, &morseCodes[j].letter, 1);
            break;
          }
        }
        memset(letterInMorse, '\0', sizeof(letterInMorse));
        letterIndex = 0;
      }
      if (morse[i] == '/') {
        strncat(decodedMsg, " ", 1);
      }
    }
  }

  if (letterIndex > 0) {
    for (int j = 0; j < sizeof(morseCodes) / sizeof(morseCodes[0]); j++) {
      if (strcmp(letterInMorse, morseCodes[j].code) == 0) {
        strncat(decodedMsg, &morseCodes[j].letter, 1);
        break;
      }
    }
  }

  printf("Decoded message: %s\n", decodedMsg);
}

void morse() {
  printf("\n%s\n", "DECODE MORSE\n");

  char morseMsg[10000];

  while (getchar() != '\n' && getchar() != EOF);

  printf("%s\n", "Enter Morse message:");
  fgets(morseMsg, sizeof(morseMsg), stdin);

  size_t len = strlen(morseMsg);
  if (len > 0 && morseMsg[len - 1] == '\n') {
    morseMsg[len - 1] = '\0';
  }

  printf("Your input: %s\n", morseMsg);

  sprintf(morseMsg, "%s ", morseMsg);

  decodeMorse(morseMsg);
}
