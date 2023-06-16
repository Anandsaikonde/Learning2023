//Roll No, Name, and Marks of Physics, Math and Chemistry of a student, and then calculates the total marks, percentage, and prints a summary:


#include <stdio.h>

int main() {
    int roll;
    char name[25];
    float phy, math, chem, total, percent;

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks of Physics, Math and Chemistry respectively: ");
    scanf("%f, %f, %f", &phy, &math, &chem);

    total = phy + math + chem;
    percent = (total / 300.0) * 100.0;

    printf("Roll No : %d\n", roll);
    printf("Name : %s\n", name);
    printf("Physics : %.2f\n", phy);
    printf("Maths : %.2f\n", math);
    printf("Chemistry : %.2f\n", chem);
    printf("Total : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percent);

    return 0;
}
