#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, j, cnt = 0;
    double k;
    for (i = 100; i <= 200; ++i)
    {
        k = sqrt(i);
        for (j = 2; j <= k; ++j)
        {
            if (0 == i % j)
            {
                break;
            }
        }
        if (j >= k)
        {
            printf("%d ", i);
            cnt++;
            if (0 == cnt % 5)
            {
                printf("\n");
            }
        }
    }
    return 0;
}