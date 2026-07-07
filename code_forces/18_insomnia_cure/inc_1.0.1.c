#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int k = 0, l = 0, m = 0, n = 0, d = 0, r = 0;
    bool *array = NULL;

    scanf("%d", &k);
    getchar();

    scanf("%d", &l);
    getchar();

    scanf("%d", &m);
    getchar();

    scanf("%d", &n);
    getchar();

    scanf("%d", &d);
    getchar();

    array = (bool *)calloc(d, sizeof(bool));

    if (k == 1 || l == 1 || m == 1 || n == 1)
    { r = d; }
    else
    {
        if (array)
        {
            if (k <= d)
            {
                for (int x = k - 1; x <= d; x = x + k)
                { array[x] = true; }
            }
    
            if (l <= d)
            {
                for (int y = l - 1; y <= d; y = y + l)
                { array[y] = true; }
            }
    
            if (m <= d)
            {
                for (int z = m - 1; z <= d; z = z + m)
                { array[z] = true; }
            }
    
            if (n <= d)
            {
                for (int k = n - 1; k <= d; k = k + n)
                { array[k] = true; }
            }
    
            for (int i = 0; i < d; i = i + 1)
            {
                if (array[i])
                { r = r + 1; }
            }

            free(array);
        }
    }

    printf("%d\n", r);

    return (0);
}
