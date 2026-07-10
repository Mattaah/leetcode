/*
    Codeforces 1999A solution - v1.0.0 - 10/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int rest_tmp = 0, rest_diff = 0, rest_f = 0, n = 0, x = 0, y = 10, z = 0, s = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        rest_f =  0;
        s      =  0;
        y      = 10;

        scanf("%d", &z);
        getchar();

        while (rest_f != z)
        {
            rest_tmp = z % y;
            rest_diff = rest_tmp - rest_f;

            s = s + rest_diff / (y / 10);

            rest_f = rest_f + rest_diff;

            y = y * 10;
        }

        printf("%d\n", s);

        x = x + 1;
    }

    return (0);
}
