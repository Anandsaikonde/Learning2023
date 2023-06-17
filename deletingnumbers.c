// largest number by deleting a single digit in a 4-digit number:


#include <stdio.h>

int main() {
  int num = 5872;
  int largest = 0;

  for (int i = 0; i < 4; i++) {
    int temp = num / 10;
    for (int j = 0; j < i; j++) {
      temp /= 10;
    }
    temp = temp * 10 + num % 10;
    if (temp > largest) {
      largest = temp;
    }
  }

  printf("Largest number by deleting a digit in %d is %d\n", num, largest);

  num = 9856;
  largest = 0;

  for (int i = 0; i < 4; i++) {
    int temp = num / 10;
    for (int j = 0; j < i; j++) {
      temp /= 10;
    }
    temp = temp * 10 + num % 10;
    if (temp > largest) {
      largest = temp;
    }
  }

  printf("Largest number by deleting a digit in %d is %d\n", num, largest);

  return 0;
}

