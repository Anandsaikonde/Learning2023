


#include <stdio.h>
#include <string.h>

// Define the student structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Define the search function
void searchStudent(struct Student students[], int numStudents, char name[]) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Name: %s\nAge: %d\nGPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
            return;
        }
    }
    printf("Student not found.\n");
}

// Example usage
int main() {
    // Define an array of students
    struct Student students[3] = {
        {"Alice", 20, 3.5},
        {"Bob", 21, 3.2},
        {"Charlie", 19, 3.8}
    };

    // Search for a student by name
    searchStudent(students, 3, "Bob");

    return 0;
}


