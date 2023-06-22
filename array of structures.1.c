


#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parse_string(char *str, struct Student *students, int num_students) {
    char *token;
    int i = 0;

    token = strtok(str, " ");
    while (token != NULL && i < num_students) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
        i++;
    }
}

int main() {
    char str[] = "1001 Aron 100.00";
    struct Student students[1];

    parse_string(str, students, 1);

    printf("Roll no: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    return 0;
}


