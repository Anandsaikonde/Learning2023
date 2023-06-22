


#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void display_students(struct Student *students, int num_students) {
    int i;

    for (i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll no: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    struct Student students[3] = {
        {1, "Alice", 85.0},
        {2, "Bob", 90.0},
        {3, "Charlie", 95.0}
    };

    display_students(students, 3);

    return 0;
}



