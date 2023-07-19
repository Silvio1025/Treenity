#include <stdio.h>

int main(void)
{
    int n, product = 1, digit;

    scanf("%d", &n);

    do
    {
        digit = n % 10;
        product *= digit;
        n /= 10;
    } while (n);

    printf("%d", product);

    return 0;
}