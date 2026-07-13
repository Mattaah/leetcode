/*
    Codeforces 268A solution - v1.0.0 - 12/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array_home = NULL, *array_guest = NULL;
    int tmp = 0, equal = 0, n = 0, x = 0;

    scanf("%d", &n);
    getchar();

    array_home =  (int *)malloc(n * sizeof(int));
    array_guest = (int *)malloc(n * sizeof(int));

    if (array_home && array_guest)
    {
        while (x < n)
        {
            scanf("%d", &array_home[x]);
            getchar();
            
            scanf("%d", &array_guest[x]);
            getchar();

            x = x  + 1;
        }

        for (int y = 0; y < n; y = y + 1)
        {
            tmp = array_home[y];
            for (int z = 0; z < n; z = z + 1)
            {
                if (array_guest[z] == tmp)
                { equal = equal + 1; }
            }
        }

        printf("%d\n", equal);

        free(array_home);
        free(array_guest);
    }

    return (0);
}
