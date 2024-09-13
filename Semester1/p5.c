//

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate cos(x) using Taylor series
double calculate_cos(double x) {
    double cosx = 0, term;
    int sign = 1;

    for (int i = 0; i <= 14; i += 2) { // 14 terms for good precision
        term = sign * (pow(x, i) / factorial(i)); // ith term
        cosx += term;
        sign *= -1; // Alternating signs
    }

    return cosx;
}

int main() {
    double x;

    // Input in degrees
    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);

    // Convert degrees to radians
    x = x * (PI / 180.0);

    // Calculate and display the result
    printf("cos(%.2lf) = %lf\n", x, calculate_cos(x));

    return 0;
}
