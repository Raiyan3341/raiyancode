#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void printInColor(const char* text, int textColor, int bgColor);
void sleepMilliseconds(int milliseconds);

int main() {
    int i;
    system("cls"); // Clear the console screen
    for (i = 1; i <= 120; i++) {
        printInColor("  RAIYAN SHK  ", 4, 15); // Red text on White background
        sleepMilliseconds(200); // Delay in milliseconds
    }
    return 0;
}

void printInColor(const char* text, int textColor, int bgColor) {
    // This function will only work on Windows
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((bgColor << 4) | textColor));
    printf("%s%c", text, 3); // Print the text with a heart symbol
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7)); // Reset to default colors
}

void sleepMilliseconds(int milliseconds) {
    #ifdef _WIN32
    Sleep(milliseconds);
    #else
    usleep(milliseconds * 1000);
    #endif
}
