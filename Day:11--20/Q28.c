/*Q28:Write a program to print the product of even numbers from 1 to n.
  */
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long to handle large results
    int count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            product *= i;
            count++;
        }
    }

    if (count == 0)
        printf("\nNo even numbers in the given range.\n");
    else
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
