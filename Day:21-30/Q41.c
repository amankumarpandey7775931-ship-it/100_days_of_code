/*Q41:Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);

    middle = num % (int)pow(10, digits);
    middle = middle - last;
    middle = middle / 10;

    result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Result: %d\n", result);
    return 0;
}
