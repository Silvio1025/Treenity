#include <stdio.h>

int main(void)
{
    int m, n, r;

    scanf("%d%d", &m, &n);

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("Gcd = %d\n", m);

    return 0;
}