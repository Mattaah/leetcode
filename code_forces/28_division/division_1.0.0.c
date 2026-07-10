/*
    Codeforces 1669A solution - v1.0.0 - 10/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int n = 0, x = 0, r = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        scanf("%d", &r);
        getchar();

        if (r >= 1900)
        { printf("Division 1\n"); }
        else if (1600 <= r && r <= 1899)
        { printf("Division 2\n"); }
        else if (1400 <= r && r <= 1599)
        { printf("Division 3\n"); }
        else
        { printf("Division 4\n"); }

        x = x + 1;
    }

    return (0);
}
