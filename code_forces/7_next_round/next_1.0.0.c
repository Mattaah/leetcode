#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n = 0, k = 0, i = 0, x = 0, y = 0, z = 0, count = 0;
    int *array = NULL;
 
    scanf("%d", &n);
    getchar();
 
    scanf("%d", &k);
    getchar();
 
    if (1 <= k && k <= n && n <= 50)
    {
        array = (int *)malloc(n * sizeof(int));
        if (array)
        {
            while (x < n)
            {
                scanf("%d", &i);
                getchar();
 
                if (0 <= i && i <= 100)
                {
                    array[x] = i;
                    x = x + 1;
                }
            }
 
            while (y < n && count < k)
            {
                if (array[y] != 0)
                {
                    if (y == k - 1 && k < n)
                    {
                        z = k;
                        while (z < n && array[z] == array[y])
                        {
                            count = count + 1;
 
                            z = z + 1;
                            y = y + 1;
                        }
                        count = count + 1;
                    }
                    else
                    {
                        count = count + 1;
                    }
                }
                y = y + 1;
            }
 
            printf("%d\n", count);
            free(array);
        }
    }
 
    return (0);
}
