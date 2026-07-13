/*
    Codeforces 1433A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int number = 0,  digits = 0, rest = 0, key = 0, n = 0, x = 0, y = 0, z = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        key    = 0;
        digits = 0;
        z      = 0;
        y      = 1;

        scanf("%d", &number);
        getchar();

        while (number % y != number)
        {
            digits = digits + 1;
            key = key + digits;

            y = y * 10;
        } 

        rest = number % 10;
        while (z < rest - 1)
        { key = key + 10; z = z + 1; }

        printf("%d\n", key);

        x = x + 1;
    }

    return (0);
}
