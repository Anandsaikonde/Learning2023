
#include <stdio.h>

int findType(char c) {
    if(c >= 'A' && c <= 'Z') {
        return 1;
    }
    else if(c >= 'a' && c <= 'z') {
        return 2;
    }
    else if(c >= '0' && c <= '9') {
        return 3;
    }
    else if(isprint(c)) {
        return 4;
    }
    else {
        return 5;
    }
}

int main() {
    char c = 'a';
    printf("The type of character %c is %d", c, findType(c));
    return 0;
    }
