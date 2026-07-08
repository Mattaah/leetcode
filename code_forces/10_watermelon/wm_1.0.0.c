/*
    Codeforces 4A solution - v1.0.0 - 02/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int w = 0;

    scanf("%d", &w);
    getchar();

    if (1 <= w && w <= 100)
    {
        if (w > 2 && (w - 2) % 2 == 0)
        { printf("YES\n"); }
        else
        { printf("NO\n"); }
    }

    return (0);
}
