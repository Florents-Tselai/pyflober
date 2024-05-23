#include <stdio.h>

int main(int argc, char *argv[]) {
    // Print a greeting message
    printf("Hello! This is a simple CLI program.\n");

    // Check if there are any command-line arguments
    if (argc > 1) {
        printf("You provided the following arguments:\n");
        for (int i = 1; i < argc; i++) {
            printf("%d: %s\n", i, argv[i]);
        }
    } else {
        printf("No arguments were provided.\n");
    }

    return 0;
}
