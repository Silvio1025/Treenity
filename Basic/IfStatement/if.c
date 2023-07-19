#include <stdio.h>

int main(void )
{
    int a, b, c, max, min;

    scanf("%d%d%d", &a, &b, &c);
    max = a;
    min = a;

    if (max > b)
    {
        min = b;
    }
    else
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    else if (c < min)
    {
        min = c;
    }

    printf("%d %d \n", max, min);

    return 0;
}