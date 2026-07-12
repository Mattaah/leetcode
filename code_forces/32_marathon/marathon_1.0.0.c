/*
    Codeforces 1692A solution - v1.0.0 - 11/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, r = 0, n = 0;

    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%d", &a);
        getchar();

        scanf("%d", &b);
        getchar();

        scanf("%d", &c);
        getchar();
    
        scanf("%d", &d);
        getchar();

        if (b > a)
        { r = r + 1; }

        if (c > a)
        { r = r + 1; }

        if (d > a)
        { r = r + 1; }

        printf("%d\n", r);
        r = 0;
    }

    return (0);
}
