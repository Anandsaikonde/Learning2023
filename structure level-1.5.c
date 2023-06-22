


#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

void swap(struct student *s1, struct student *s2) {
    struct student temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct student s1 = {"Alice", 1, 90.5};
    struct student s2 = {"Bob", 2, 85.0};

    printf("Before swapping:\n");
    printf("s1: %s %d %.2f\n", s1.name, s1.roll, s1.marks);
    printf("s2: %s %d %.2f\n", s2.name, s2.roll, s2.marks);

    swap(&s1, &s2);

    printf("\nAfter swapping:\n");
    printf("s1: %s %d %.2f\n", s1.name, s1.roll, s1.marks);
    printf("s2: %s %d %.2f\n", s2.name, s2.roll, s2.marks);

    return 0;
}


