/*Q30:Write a program to reverse a given number.
*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                       // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
