// implementation of a C function that takes a integer percentage input and returns the corresponding grade using switch case statements:


#include<stdio.h>

char get_grade(int percentage) {
    char grade;

    switch(percentage / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
        case 3:
            grade = 'E';
            break;
        default:
            grade = 'F';
    }

    return grade;
}

int main() {
    int percentage = 65;

    char grade = get_grade(percentage);

    printf("Grade %c\n", grade);

    return 0;
}
