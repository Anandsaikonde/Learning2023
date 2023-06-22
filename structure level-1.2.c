

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex *c) {
    printf("Enter the real and imaginary parts of the complex number: ");
    scanf("%f %f", &c->real, &c->imag);
}

void writeComplex(struct Complex c) {
    if (c.imag < 0)
        printf("The complex number is: %.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("The complex number is: %.2f + %.2fi\n", c.real, c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    readComplex(&c1);
    readComplex(&c2);

    sum = addComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    writeComplex(sum);
    writeComplex(product);

    return 0;
}

