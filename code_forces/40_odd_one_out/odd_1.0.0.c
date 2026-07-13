/*
    Codeforces 1915A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, n =0;

    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%d %d %d", &a, &b, &c);
        getchar();

            if (a != b && a != c)
            { printf("%d\n", a); }
            else if (b != a && b != c)
            { printf("%d\n", b); }
            else if (c != a && c != b)
            { printf("%d\n", c); }
    }
    
    return (0);
}
