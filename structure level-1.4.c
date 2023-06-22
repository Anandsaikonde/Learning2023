


#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    struct student *s;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    s = (struct student*) malloc(n * sizeof(struct student));

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", (s+i)->name);

        printf("Enter roll number: ");
        scanf("%d", &(s+i)->roll);

        printf("Enter marks: ");
        scanf("%f", &(s+i)->marks);
    }

    printf("\nDetails of students:\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s\n", (s+i)->name);
        printf("Roll number: %d\n", (s+i)->roll);
        printf("Marks: %.2f\n", (s+i)->marks);
    }

    free(s);

    return 0;
}


