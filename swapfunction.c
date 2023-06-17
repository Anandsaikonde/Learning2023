 //to swap any type of data passed to a function:


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_data(void* var1, void* var2, size_t variable_size) { //var1 & var2 are void pointers
    void* temp = malloc(variable_size); //allocate memory for temp variable
    memcpy(temp, var1, variable_size); //copy value var1 to temp
    memcpy(var1, var2, variable_size); //copy value var2 to var1
    memcpy(var2, temp, variable_size); //copy value in temp to var2
    free(temp); //free allocated memory
}

int main() {
    int intValue1 = 5, intValue2 = 10;
    printf("Before swapping: intValue1 = %d, intValue2 = %d\n", intValue1, intValue2);
    swap_data(&intValue1, &intValue2, sizeof(int));
    printf("After swapping: intValue1 = %d, intValue2 = %d\n", intValue1, intValue2);

    double doubleValue1 = 3.1415, doubleValue2 = 2.7182;
    printf("Before swapping: doubleValue1 = %f, doubleValue2 = %f\n", doubleValue1, doubleValue2);
    swap_data(&doubleValue1, &doubleValue2, sizeof(double));
    printf("After swapping: doubleValue1 = %f, doubleValue2 = %f\n", doubleValue1, doubleValue2);

    char charValue1 = 'A', charValue2 = 'B';
    printf("Before swapping: charValue1 = %c, charValue2 = %c\n", charValue1, charValue2);
    swap_data(&charValue1, &charValue2, sizeof(char));
    printf("After swapping: charValue1 = %c, charValue2 = %c\n", charValue1, charValue2);

    return 0;
}
