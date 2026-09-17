#include <stdio.h>

int main(void)
{
    // Integer variable
    int age = 20;

    // Floating-point variable
    float height = 1.75f;

    // Double-precision variable
    double balance = 12500.50;

    // Character variable
    char grade = 'A';

    // Constant
    const int days_in_week = 7;

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Balance: %.2f\n", balance);
    printf("Grade: %c\n", grade);
    printf("Days in a week: %d\n", days_in_week);

    // Changing a variable
    age = 21;

    printf("\nUpdated age: %d\n", age);

    // Size of different data types
    printf("\nSize of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}