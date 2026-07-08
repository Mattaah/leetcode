/*
    Codeforces 1899A solution - v1.0.0 - 27/06/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int t = 0;
    int n = 0;
    int x = 0;

    scanf("%d", &t);
    getchar();

    if (1 <= t && t <= 100)
    {
        while (x < t)
        {
            scanf("%d", &n);
            getchar();

            if (1 <= n && n <= 1000)
            {
                if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
                {
                    printf("First\n");
                }
                else
                {
                    printf("Second\n");
                }
            }
            x = x + 1;
        }
    }

    return (0);
}