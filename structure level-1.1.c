// the volume and total surface area of a box and access the members of the structure with the help of a structure pointer:


#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

int main() {
    struct Box box;
    struct Box *ptrBox;
    ptrBox = &box;

    printf("Enter the length of the box: ");
    scanf("%f", &ptrBox->length);

    printf("Enter the width of the box: ");
    scanf("%f", &ptrBox->width);

    printf("Enter the height of the box: ");
    scanf("%f", &ptrBox->height);

    float volume = (*ptrBox).length * (*ptrBox).width * (*ptrBox).height;
    printf("The volume of the box is: %.2f\n", volume);

    float surfaceArea = 2 * ((*ptrBox).length * (*ptrBox).width + (*ptrBox).length * (*ptrBox).height + (*ptrBox).width * (*ptrBox).height);
    printf("The total surface area of the box is: %.2f\n", surfaceArea);

    return 0;
}


