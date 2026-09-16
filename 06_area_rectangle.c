#include <stdio.h>
int main() {
    float length, width;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Area of rectangle = %.2f", length * width);
    return 0;
}
