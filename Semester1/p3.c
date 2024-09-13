// 

#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, remainder, base = 1;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;    // Get the last digit of the binary number
        decimal = decimal + remainder * base;
        binary /= 10;               // Remove the last digit
        base *= 2;                  // Move to the next power of 2
    }

    // Output the decimal number
    printf("Decimal Number: %d\n", decimal);

    return 0;
}
