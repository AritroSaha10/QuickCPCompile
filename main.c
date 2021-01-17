#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This does not sanatize inputs as it assumes that you are running this on your own code.
// Takes the filename (without the extension!) as a parameter

int main(int argc, char *argv[]) {
    char cmd[256] = "";

    if (argc < 2) {
        return 1;
    }

    strcat(cmd, "g++ -std=c++17 -O2 -Wall ");
    strcat(cmd, argv[1]);
    strcat(cmd, ".cpp -o ");
    strcat(cmd, argv[1]);
    strcat(cmd, ".exe\0");

    printf("Running command: %s\n\n", cmd);

    int errCode = system(cmd);

    if (errCode != 0) {
        printf("\nSomething went wrong. Please try again.\n");
        return 1;
    } else {
        char fname[256] = "";
        strcat(fname, argv[1]);
        strcat(fname, ".exe");

        printf("\nCompilation has likely completed!\nRunning program (can input now)...\n", fname);
        system(fname);
    }
    return 0;
}
