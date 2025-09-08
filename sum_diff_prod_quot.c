#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod, quot;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum, difference, product, quotient
    sum = a + b;
    diff = a - b;
    prod = a * b;

    // Handle division by zero
    if(b != 0) {
        quot = a / b;
    } else {
        quot = 0; // Or we can display error
    }

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);

    return 0;
}
