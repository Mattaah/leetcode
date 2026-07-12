/*
    Codeforces 2009A solution - v1.0.0 - 11/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, n = 0, r = 0, r_tmp = 0, limit = 0, x = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {   
        scanf("%d", &a);
        getchar();

        scanf("%d", &b);
        getchar();

        r_tmp = b - a;
        
        printf("%d\n", r_tmp);

        x = x + 1;
    }

    return (0);
}
