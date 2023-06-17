



#include <stdio.h>

// Function to print numbers from 1 to n, inclusive
void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces in between numbers
void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

// Function to print numbers from n to 1, inclusive
void printReversedNumbers(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n = 5; // Can be changed to any desired value
    for (int i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces((n - i) * 2);
        printReversedNumbers(i);
        printf("\n");
    }
    return 0;
}

