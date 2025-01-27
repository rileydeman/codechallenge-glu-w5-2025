#include <stdio.h>

int readFile() {
    printf("%s\n", "READ FILE");
    printf("%s\n", "This challenge is to read out a .txt file, which is located in ./challenges/assets/c3/input.txt in this project\n");

    FILE *fptr;

    fptr = fopen("../challenges/assets/c3/input.txt", "r");

    if (fptr == NULL) {
        printf("%s\n", "ERROR: Can't open file to read!");
        return 404;
    }


    char input[1000];

    while (fgets(input, sizeof(input), fptr)) {
        printf("%s", input);
    }

    fclose(fptr);
}