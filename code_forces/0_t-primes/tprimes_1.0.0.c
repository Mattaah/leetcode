/*
    Codeforces 230B solution - v1.0.0 - 26/06/2026
    Author: Mattah
*/

#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>
#include <math.h>

bool *sieve_of_eratosthenes(int n)
{
    bool *array = (bool *)malloc((n + 1) * sizeof(bool));

    if (array)
    {
        array[0] = false;
        array[1] = false;

        for (int x = 2; x < n; x = x + 1)
        {
            array[x] = true;
        }

        for (int y = 2; y * y <= n; y = y + 1)
        {
            if (array[y] == true)
            {
                for (int m = y * y; m <= n; m = m + y)
                {
                    array[m] = false;
                }
            }
        }
    }

    return (array);
}

int main()
{
    long long tmp = 0;
    long long w_round = 0;
    long long *array = NULL;
    bool *table = NULL;

    double n_round = 0.0;

    int n = 0;
    int i = 0;

    scanf("%d", &n);
    getchar();

    if (1 <= n && n <= 100000)
    {
        array = (long long *)malloc(n * sizeof(long long));

        if (array)
        {
            while (i < n)
            {
                scanf("%lld", &tmp);
                getchar();

                if (1 <= tmp && tmp <= 1000000000000LL)
                {
                    array[i] = tmp;
                    i = i + 1;
                }
            }

            table = sieve_of_eratosthenes(1000000 + 1);

            for (int x = 0; x < i; x = x + 1)
            {
                w_round = round(sqrt(array[x]));
                n_round = sqrt(array[x]);

                if ((n_round - w_round == 0) && table[w_round] == true)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            free(array);
        }
    }

    return (0);
}