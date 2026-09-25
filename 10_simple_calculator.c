#include <stdio.h>

int main() {
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\nAddition = %.2f\\n", a + b);
    printf("Subtraction = %.2f\\n", a - b);
    printf("Multiplication = %.2f\\n", a * b);

    if (b != 0) {
        printf("Division = %.2f\\n", a / b);
    } else {
        printf("Division = Cannot divide by zero.\\n");
    }

    return 0;
}
