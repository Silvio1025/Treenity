#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    scanf("%d", &n);

    while (n)
    {
        sum *= 10;
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);

    return 0;
}