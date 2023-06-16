//prints the grade of a given student, based on their score, using if else if blocks:


#include <stdio.h>

int main() {
    int score;
    printf("Enter student's score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade A");
    }
    else if (score >= 75 && score <= 89) {
        printf("Grade B");
    }
    else if (score >= 60 && score <= 74) {
        printf("Grade C");
    }
    else if (score >= 50 && score <= 59) {
        printf("Grade D");
    }
    else if (score >= 0 && score <= 49) {
        printf("Grade F");
    }
    else {
        printf("Invalid score");
    }
    return 0;
}
