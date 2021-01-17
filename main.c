#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This does not sanatize inputs as it assumes that you are running this on your own code.
// Takes the filename (without the extension!) as a parameter
int main(int argc, char *argv[]) {
    char cmd[256] = "";

    if (argc != 2) {
        printf("QuickCPCompile:\n\tQuickly compile C++ files written for competitive programming competitions.\n");
        printf("Usage:\n\tCompile c++ files on the c++17 standard with optimization and all errors / warnings\n");
        printf("Example of command:\n\t\"QuickCPCompile.exe HelloWorld\"\n");
        printf("Note:\n\tWhen providing the name, please do not include the extension.\n");
        printf("\t\tExample: If the source filename is \"HelloWorld.cpp\", then use HelloWorld as the argument\n");
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
