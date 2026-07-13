/*
    Codeforces 2044A solution - v1.0.0 - 13/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int n = 0, value = 0, o_pair = 0;

    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%d", &value);
        getchar();

        o_pair = value - 1;

        printf("%d\n", o_pair);
    }

    return (0);
}
