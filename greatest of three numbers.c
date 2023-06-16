//implementation of a C function that takes three integer inputs and returns the greatest of them:


#include<stdio.h>

int greatest_of_three(int a, int b, int c) {
    int greatest = a;

    if (b > greatest) {
        greatest = b;
    }
    if (c > greatest) {
        greatest = c;
    }

    return greatest;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int greatest = greatest_of_three(a, b, c);

    printf("The greatest of %d, %d, and %d is: %d\n", a, b, c, greatest);

    return 0;
}
