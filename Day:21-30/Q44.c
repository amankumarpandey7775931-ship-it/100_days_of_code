/*Q44:Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>

int main() {
    int n, k;
    double sum = 0.0;

    scanf("%d", &n);

    for (k = 1; k <= n; k++)
        sum += (double)(2*k - 1) / (2*k);

    printf("Sum = %lf", sum);
    return 0;
}
