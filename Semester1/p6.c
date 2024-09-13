//

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate e^x using Taylor series
double calculate_exp(double x) {
    double expx = 1, term;

    for (int i = 1; i <= 10; i++) { // 10 terms for good precision
        term = (x * term) / i;      // Next term in series
        expx += term;
    }

    return expx;
}

int main() {
    double x;

    // Input x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate and display e^x
    printf("e^%.2lf = %lf\n", x, calculate_exp(x));

    return 0;
}
