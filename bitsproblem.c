


#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    for (i=31; i>=0; i--) {
        printf("%u", (num >> i) & 1);
    }
}

int main() {
    unsigned int num;
    // Allow the user to enter an integer value
    printf("Please enter a 32-bit integer: ");
    scanf("%u", &num);
    // Print bits of the integer
    printf("The bits of %u are: ", num);
    printBits(num);
    printf("\n");
    return 0;
}

