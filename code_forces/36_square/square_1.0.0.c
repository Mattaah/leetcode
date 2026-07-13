/*
    Codeforces 2167A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, n = 0, x = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        scanf("%d", &a);
        getchar();

        scanf("%d", &b);
        getchar();

        scanf("%d", &c);
        getchar();

        scanf("%d", &d);
        getchar();

        if (a == b && a == c && a == d)
        { printf("YES\n"); }
        else
        { printf("NO\n");  }

        x = x + 1;
    }

    return (0);
}
