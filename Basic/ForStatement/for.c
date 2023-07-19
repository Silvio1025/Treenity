#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i = 2;
    double k;

    scanf("%d", &n);

    k = sqrt(n);
    for (; i <= k; ++i)
    {
        if (0 == n % i)
            break;
    }
    if (i >= k)
    {
        printf("%d is a prime.\n", n);
    }
    else
    {
        printf("%d is not a prime.\n", n);
    }
    return 0;
}