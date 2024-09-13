//

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
