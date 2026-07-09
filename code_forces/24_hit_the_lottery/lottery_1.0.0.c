#include <stdio.h>

int main()
{
    int cash = 0, rest_tmp = 0, rest_f = 0, rest_diff = 0, q = 0, x = 10;

    scanf("%d", &cash);
    getchar();

    while (rest_f != cash)
    {
        rest_tmp = cash % x;
        rest_diff = rest_tmp - rest_f;

        if (rest_diff % 100 == 0)
        { q = q + rest_diff / 100; }
        else if (rest_diff % 20 == 0)
        { q = q + rest_diff / 20; }
        else if (rest_diff % 10 == 0)
        { q = q + rest_diff / 10; }
        else if (rest_diff % 5 == 0)
        { q = q + rest_diff / 5; }
        else
        { q = q + rest_diff; }

        rest_f = rest_f + rest_diff;

        x = x * 10;
    }

    printf("%d\n", q);

    return (0);
}
