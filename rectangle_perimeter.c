#include <stdio.h>

int main() {
    // Declare variables for the sides of the rectangle
    int a, b;

    // Input for side 'a' from the user
    // 'a' represents the length of the rectangle
    printf("Enter the length of side a: ");
    scanf("%d", &a);

    // Input for side 'b' from the user
    // 'b' represents the breadth (width) of the rectangle
    printf("Enter the length of side b: ");
    scanf("%d", &b);

    // Calculate perimeter using formula: P = 2 * (a + b)
    int perimeter = 2 * (a + b);

    // Display the perimeter of the rectangle
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
