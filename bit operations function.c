//the implementation of the bit_operations function in C:


#include<stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;

    if(oper_type == 1) {
        result |= 1;
    }
    else if(oper_type == 2) {
        result &= ~(1 << 31);
    }
    else if(oper_type == 3) {
        result ^= (1 << 16);
    }

    return result;
}

int main() {
    int num = 0xFFFFFFFF;
    int oper_type = 1;

    int result = bit_operations(num, oper_type);

    printf("Result: %x\n", result);

    return 0;
}


