 //implementation of a C function that takes a character input and returns 1 if it is a vowel and 0 otherwise using switch case statements:


#include<stdio.h>

int is_vowel(char c) {
    int result;

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1;
            break;
        default:
            result = 0;
    }

    return result;
}

int main() {
    char c = 'e';

    int is_v = is_vowel(c);

    if (is_v)
        printf("Vowel\n");
    else
        printf("Not Vowel\n");

    return 0;
}
