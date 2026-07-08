/*
    Codeforces 231A solution - v1.0.0 - 28/06/2026
    Author: Mattah
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n = 0, x = 0, f = 0, s = 0, t = 0, count = 0;

    scanf("%d", &n);
    getchar();

    if (1 <= n && n <= 1000)
    {
        while (x < n)
        {
            scanf("%d", &f);
            getchar();

            scanf("%d", &s);
            getchar();

            scanf("%d", &t);
            getchar();

            if ((f == 1 && s == 1) || (f == 1 && t == 1) || (s == 1 && t == 1))
            {
                count = count + 1;
            }
            x = x + 1;
        }
        printf("%d\n", count);
    }

    return (0);
}
