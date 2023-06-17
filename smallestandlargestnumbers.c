//the smallest and largest digits in a given set of numbers:


#include <stdio.h>

int main () {
    int n;
    printf("Enter the number of numbers:");
    scanf("%d", &n);

    int num, smallest = 9, largest = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter a number:");
        scanf("%d", &num);

        int digit;
        while(num) {
            digit = num % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            if (digit > largest) {
                largest = digit;
            }

            num /= 10;
        }
    }

    if (smallest == 9 && largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit is: %d\n", smallest);
        printf("Largest digit is: %d\n", largest);
    }

    return 0;
}


