/*Q31:Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary representation of %d is: ", num);

    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (0 or 1)
        num = num / 2;        // Divide number by 2
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}
