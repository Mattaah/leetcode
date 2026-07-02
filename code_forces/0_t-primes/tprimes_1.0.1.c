#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long tmp = 0;
    long long tmp_2 = 0;
    long long w_round = 0;
    long long *array = NULL;

    double tmp_3 = 0.0;
    double n_round = 0.0;

    int divisor = 0;
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

            for (int x = 0; x < i; x = x + 1)
            {
                divisor = 1;
                w_round = round(sqrt(array[x]));
                n_round = sqrt(array[x]);

                if ((n_round - w_round != 0) || (array[x] % 2 == 0 && array[x] != 4))
                {
                    printf("NO\n");
                }
                else
                {
                    tmp_3 = n_round;
                    for (int y = 1; y <= tmp_3; y = y + 1)
                    {
                        if (array[x] % y == 0)
                        {
                            divisor = divisor + 1;
                        }

                        if (y == tmp_3 && divisor == 3 && array)
                        {
                            printf("YES\n");
                        }
                        else if (y == tmp_3 && divisor != 3)
                        {
                            printf("NO\n");
                        }
                    }
                }
            }
            free(array);
        }
    }

    return (0);
}