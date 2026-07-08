/*
    Codeforces 1328A solution - v1.0.1 - 07/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, x = 0, y = 0, n = 0, rest = 0, mov = 0;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        mov = 0;

        scanf("%d", &a);
        getchar();

        scanf("%d", &b);
        getchar();

        rest = a % b;
        if (rest != 0)
        { mov = b - rest; }
    
        printf("%d\n", mov);

        x = x + 1;
    }

    return (0);
}
