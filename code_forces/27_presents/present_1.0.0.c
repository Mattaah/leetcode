/*
    Codeforces 136A solution - v1.0.0 - 09/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *f = NULL, *f_c = NULL, n = 0;

    scanf("%d", &n);
    getchar();

    f = (int *)malloc(n * sizeof(int));
    f_c = (int *)malloc(n * sizeof(int));

    if (f && f_c)
    {
        for (int x = 0; x < n; x = x + 1)
        {
            scanf("%d", &f[x]);
            getchar();

            f_c[x] = f[x];
        }

        for (int y = 0; y < n; y = y + 1)
        {
            for (int z = 0; z < n; z = z + 1)
            {
                if (f[z] == y + 1)
                { f_c[y] = z + 1; }
            }
        }

        for (int a = 0; a < n; a = a + 1)
        { printf("%d ", f_c[a]); }

        free(f  );
        free(f_c);
    }
    
    return (0);
}
