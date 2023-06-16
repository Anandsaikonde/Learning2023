Sure thing! Here's how you can find the biggest of two numbers in C using if-else statements:


#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
    {
        printf("%d is the maximum number.", num1);
    }
    else
    {
        printf("%d is the maximum number.", num2);
    }

    return 0;
}

And here's how you can find the biggest of two numbers in C using the ternary operator:


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


I hope this helps! Let me know if you have any other questions.
