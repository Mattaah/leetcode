/*
    Codeforces 2014B solution - v1.0.0 - 27/06/2026
    Author: Mattah
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int t = 0, n = 0, k = 0, x = 0;
    long long sum = 0;

    clock_t start_time = clock();

    scanf("%d", &t);
    getchar();

    if (1 <= t && t <= 10000)
    {
        while (x < t)
        {
            scanf("%d", &n);
            getchar();

            scanf("%d", &k);
            getchar();

            if ((1 <= n && n <= 1000000000) && (1 <= k && k <= n))
            {
                if (k == 1)
                {
                    sum = n * n;
                }
                else if (k == n)
                {
                    for (int y = 1; y <= n; y = y + 1)
                    {
                        sum = sum + y * y;
                    }
                }
                else
                {
                    for (int y = n - (k - 1); y <= n; y = y + 1)
                    {
                        sum = sum + y * y;
                    }
                }

                if (sum % 2 == 0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
                sum = 0;
            }
            x = x + 1;
        }
    }

    clock_t end_time = clock();

    double result = (end_time - start_time) / (double)CLOCKS_PER_SEC;

    printf("Time = %lf\n", result);

    return (0);
}