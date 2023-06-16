// how you can find the biggest of two numbers in C using the ternary operator:


#include <stdio.h>

int main()
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = num1 > num2 ? num1 : num2;

    printf("%d is the maximum number.", max);

    return 0;
}


