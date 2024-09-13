//

#include <stdio.h>
#define PI 3.14159265

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate sin(x) using Taylor series
double calculate_sin(double x) {
    double sinx = 0, term;
    int sign = 1;

    for (int i = 1; i <= 15; i += 2) { // 15 terms for good precision
        term = sign * (pow(x, i) / factorial(i)); // ith term
        sinx += term;
        sign *= -1; // Alternating signs
    }

    return sinx;
}

int main() {
    double x;

    // Input in degrees
    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);

    // Convert degrees to radians
    x = x * (PI / 180.0);

    // Calculate and display the result
    printf("sin(%.2lf) = %lf\n", x, calculate_sin(x));

    return 0;
}
