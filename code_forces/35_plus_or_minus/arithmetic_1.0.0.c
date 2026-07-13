/*
    Codeforces 1807A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, n = 0;

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

        if ((a + b) == c)
        { printf("%c\n", '+'); }
        else if ((a - b) == c)
        { printf("%c\n", '-'); }
    }

    return (0);
}
