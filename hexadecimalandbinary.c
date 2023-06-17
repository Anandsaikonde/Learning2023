// to print exponent part of double variable in hexadecimal and binary format:


#include<stdio.h>

int main() {
   double x = 0.7;
   unsigned long long *xp = (unsigned long long *)&x;

   int exp = ((*xp >> 52) & 0x7ff);

   printf("Exponent in hex: 0x%x\n", exp);
   printf("Exponent in binary: 0b");

   for(int i=10; i>=0; i--) {
        if((exp >> i)&1)
            printf("1");
        else
            printf("0");
   }

   return 0;
}
