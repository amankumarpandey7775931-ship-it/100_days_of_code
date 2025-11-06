/*Q45:Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/
#include <stdio.h>

int main() {
    int n, k;
    double sum = 0.0;

    scanf("%d", &n);

    for (k = 1; k <= n; k++)
        sum += (double)(2*k) / (4*k - 1);

    printf("Sum = %lf", sum);

    return 0;
}



