/*
    Codeforces 1742B solution - v1.0.0 - 13/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int *array = NULL;
    int length = 0, n = 0, x = 0, m = 0, z = 0;
    bool r = true;

    scanf("%d", &n);
    getchar();

    while (x < n)
    {
        scanf("%d", &length);
        getchar();

        array = (int *)malloc(length * sizeof(int));
        if (array)
        {
            z = 0;
            m = 0;
            
            for (int y = 0; y < length; y = y + 1)
            {
                scanf("%d", &array[y]);
                getchar();
            }

            while (r && m < length)
            {
                z = m + 1;
                while (r && z < length)
                { r = array[m] != array[z]; z = z + 1; }
                m = m + 1;
            }

            if (r)
            { printf("YES\n"); }
            else
            { printf("NO\n"); r = true; }

            free(array);
        }
        
        x = x + 1;
    }

    return (0);
}
