 //input in the order of Operand 1, Operator, and Operand 2 and performs the corresponding arithmetic operation:


#include<stdio.h>

int main() {
	float num1, num2, result;
	char op;

	printf("Enter Number1: ");
	scanf("%f", &num1);

	printf("Enter Operator: ");
	scanf(" %c", &op);

	printf("Enter Number2: ");
	scanf("%f", &num2);

	switch(op) {
		case '+':
			result = num1 + num2;
			printf("%.2f + %.2f = %.2f", num1, num2, result);
			break;

		case '-':
			result = num1 - num2;
			printf("%.2f - %.2f = %.2f", num1, num2, result);
			break;

		case '*':
			result = num1 * num2;
			printf("%.2f * %.2f = %.2f", num1, num2, result);
			break;

		case '/':
			if (num2 == 0) {
				printf("Error! Division by zero.");
			}
			else {
				result = num1 / num2;
				printf("%.2f / %.2f = %.2f", num1, num2, result);
			}
			break;

		default:
			printf("Error! Invalid operator.");
	}

	return 0;
	}
