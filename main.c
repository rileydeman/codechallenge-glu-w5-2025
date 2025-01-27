#include <stdio.h>
#include "challenges/1.c"
#include "challenges/2.c"
#include "challenges/3.c"
#include "challenges/4.c"
#include "challenges/5.c"
#include "challenges/6.c"
#include "challenges/8.c"

int main() {
    printf("GLU challenges week 5 2025\n");
    printf("Welcome to the C challenges program from rileydeman\n");
    printf("%s\n", "This program you can run challenges that rileydeman did in week 5 of 2025 (27/01/2025 - 31/01/2025) at GLU!\n");

    printf("%s\n", "What challenge do you want to run?");

    int challenge;

    if (scanf("%d", &challenge) != 1) {
        printf("ERROR: Invalid input at the get challenge question. Please enter an integer.\n");
        return 422;
    }

    if (challenge == 1) {
        calc();
    } else if (challenge == 2) {
        countChars();
    } else if (challenge == 3) {
        readFile();
    } else if (challenge == 4) {
        pyramid();
    } else if (challenge == 5) {
        stepCounter();
    } else if (challenge == 6) {
        checkBrackets();
    } else if (challenge == 8) {
        morse();
    } else {
        char message[50];
        sprintf(message, "ERROR: Challenge %d not found!", challenge);
        printf(message);
        main();
    }

    printf("\n Do you want to restart the program? (y/n) \n");
    char answer;
    scanf(" %c", &answer);

    if (answer == 'y') {

        #ifdef _WIN32
            // printf("Operating System: Windows (32-bit or 64-bit)\n");
            system("cls");  // Clear console on Windows
        #elif __linux__
            // printf("Operating System: Linux\n");
            system("clear");  // Clear console on Linux
        #elif __APPLE__
            // printf("Operating System: macOS\n");
            system("clear");  // Clear console on macOS
        #elif __unix__
            // printf("Operating System: Unix\n");
            system("clear");  // Clear console on Unix
        #elif __FreeBSD__
            // printf("Operating System: FreeBSD\n");
            system("clear");  // Clear console on FreeBSD
        #elif __ANDROID__
            // printf("Operating System: Android\n");
            system("clear");  // Clear console on Android
        #else
            // printf("Operating System: Unknown\n");
            printf("Cannot clear console: Unknown OS\n");
        #endif

        main();
    }
}