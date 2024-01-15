// encryption.h

#ifndef ENCRYPTION_H
#define ENCRYPTION_H

void initializeEncryption();
void encryptText(const char plainText[], char encryptedText[]);
char encryptCharacter(char character);
void cleanupEncryption();

#endif // ENCRYPTION_H
