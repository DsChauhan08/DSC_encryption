// ui.h

#ifndef UI_H
#define UI_H

#define MAX_INPUT_SIZE 100
#define MAX_OUTPUT_SIZE 200

void initializeUI();
void getUserInput(char userInput[]);
void displayResult(const char result[]);
void cleanupUI();

#endif // UI_H
