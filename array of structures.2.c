


#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initialize_students(struct Student *students, int num_students) {
    int i;

    for (i = 0; i < num_students; i++) {
        students[i].rollno = i + 1;
        strcpy(students[i].name, "John Doe");
        students[i].marks = 0.0;
    }
}

int main() {
    struct Student students[3];

    initialize_students(students, 3);

    printf("Student 1:\n");
    printf("Roll no: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    printf("Student 2:\n");
    printf("Roll no: %d\n", students[1].rollno);
    printf("Name: %s\n", students[1].name);
    printf("Marks: %.2f\n", students[1].marks);

    printf("Student 3:\n");
    printf("Roll no: %d\n", students[2].rollno);
    printf("Name: %s\n", students[2].name);
    printf("Marks: %.2f\n", students[2].marks);

    return 0;
}


