#include <stdio.h>
#define PI 3.14159  // Define the value of Pi

int main() {
    float radius, area, circumference;

    // Input the radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
