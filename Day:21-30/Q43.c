/*Q43:Write a program to check if a number is a strong number.
  */
#include <stdio.h>

int main() {
    int n, temp, d, i, f, sum = 0;
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        d = temp % 10;
        f = 1;
        for (i = 1; i <= d; i++)
            f *= i;
        sum += f;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}
