// cipher_functions.c

#include "cipher_functions.h"

const char* cipherMapping[] = {
    "A$K23", "B$SKT", "C$YIR", "DGTU", "ESDE", "FBYJ", "G78YA", "HD78G", "IE7AF", "JDSU9",
    "KD7T6", "L78SD", "MD89U", "N89UX", "OIXOI", "PDTHW", "Q765U", "RDTH5", "SHY54", "T567H",
    "UDREY", "VTU56", "W6RUD", "XEW4Y", "Y436T", "ZDHT3", "0SF88", "1EYDH", "2EY54", "34W5T",
    "4TRH4", "5FGXN", "6FEW", "7ERT", "8ERGT", "9FIET", "!CEGT", "@HYEE", "#TRIE", "$*FHU",
    "?%JIJ"
};

char* encryptCharacter(char character) {
    // Basic function to encrypt a single character using the cipher mapping
    // Note: This is a placeholder, replace it with your actual encryption logic
    if (isalpha(character)) {
        int index = toupper(character) - 'A';
        return cipherMapping[index];
    } else if (isdigit(character)) {
        int index = character - '0' + 26;
        return cipherMapping[index];
    } else {
        switch (character) {
            case '!': return cipherMapping[36];
            case '@': return cipherMapping[37];
            case '#': return cipherMapping[38];
            case '$': return cipherMapping[39];
            case '?': return cipherMapping[40];
            default: return NULL; // Handle other characters as needed
        }
    }
}
