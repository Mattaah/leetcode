/*
    Codeforces 617A solution - v1.0.0 - 09/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int rest_tmp = 0, rest_diff = 0, rest_f = 0, count = 0, 
               n = 0,         x = 0,      y = 0,     q = 0;

    scanf("%d", &n);
    getchar();

    x = 10;
    while (rest_f != n)
    {
        rest_tmp = n % x;
        rest_diff = rest_tmp - rest_f;

        rest_f = rest_f + rest_diff;

        while (rest_diff > 0)
        {
            if (rest_diff - 5 >= 0)
            { rest_diff = rest_diff - 5; q = q + 1; }
            else if (rest_diff - 4 >= 0)
            { rest_diff = rest_diff - 4; q = q  + 1; }
            else if (rest_diff - 3 >= 0)
            { rest_diff = rest_diff - 3; q = q + 1; }
            else if (rest_diff - 2 >= 0)
            { rest_diff = rest_diff - 2; q = q + 1; }
            else if (rest_diff - 1 >= 0)
            { rest_diff = rest_diff - 1; q = q + 1; }
        }

        x = x * 10;
    }

    printf("%d\n", q);

    return (0);
}
