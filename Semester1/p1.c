// 

#include <stdio.h>

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the fibonacci function and print the nth Fibonacci number
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}
