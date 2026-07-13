/*
    Codeforces 1772A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, r = 0, n = 0;
    char c = ' ';

    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%d %c %d", &a, &c, &b);
        getchar();

        r = a + b;

        printf("%d\n", r);
    }

    return (0);
}
