#include <stdio.h>
#include <math.h>   // gcc program.c -lm

int main() {
    int n, rem, res = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;         // extract last binary digit (0 or 1)
        res += rem * base;    // add digit × current base
        base *= 2;            // next power of 2
        n /= 10;              // remove last digit
    }

    printf("Decimal = %d\n", res);
    return 0;
}
