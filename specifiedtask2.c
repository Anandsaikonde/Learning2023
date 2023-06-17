// to achieve the specified task:


#include <stdio.h>

int count_set_bits(int n) {
    int count = 0;
    while(n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int length = sizeof(arr)/sizeof(arr[0]);
    int total_bits_set = 0;

    for(int i=0; i<length; i++) {
        total_bits_set += count_set_bits(arr[i]);
    }

    printf("Total number of set bits in the given array: %d", total_bits_set);
    return 0;
}


