#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read input
    scanf("%f", &celsius);

    // Conversion formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}
