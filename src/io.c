// io.c

#include <stdio.h>
#include "io.h"

void initializeIO() {
    // Additional initialization logic for Input/Output handling
    printf("Input/Output Initialized\n");
}

void saveEncryptedTextToFile(const char encryptedText[]) {
    // Basic function to save encrypted text to a file
    FILE *file = fopen("encrypted_text.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        return;
    }

    fprintf(file, "%s", encryptedText);

    fclose(file);
}

void cleanupIO() {
    // Cleanup logic for Input/Output handling
    printf("Input/Output Cleanup\n");
}
