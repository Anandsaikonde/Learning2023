//implementation of a C function that accepts an integer and operation type to perform bit operations as described in the prompt:


#include<stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    int result;

    switch (oper_type) {
        case 1:
            result = num | (0b11<<pos);
            break;
        case 2:
            result = num & ~(0b111<<pos);
            break;
        case 3:
            result = num ^ (1<<31);
            break;
        default:
            printf("Invalid Operation Type\n");
            result = num;
    }

    return result;
}

int main() {
    int num = 0b11100001;
    int oper_type = 2;
    int pos = 3;

    int result = bit_operations(num, oper_type, pos);

    printf("Result: %#010x\n", result);

    return 0;
}
