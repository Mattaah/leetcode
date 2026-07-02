#include <stdio.h>

int main()
{
    int t = 0, n = 0, k = 0, x = 0, odd = 0, odd_2 = 0, odd_t = 0, even = 0, even_2 = 0, sum = 0;

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
                    sum = n;
                }
                else if (k == n)
                {
                    odd = (n + 1) / 2;
                    even = n - odd;

                    sum = 1 * odd + 2 * even;
                }
                else
                {
                    odd = (n - k + 1) / 2;
                    odd_2 = (n + 1) / 2;
                    odd_t = odd_2 - odd;
                    even = odd_t - k;

                    sum = 1 * odd_t + 2 * even;
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

    return (0);
}

/*#include <stdio.h>
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
                    sum = n;
                }
                else if (k == n)
                {
                    for (int y = 1; y <= n; y = y + 1)
                    {
                        if (y % 2 != 0)
                        {
                            sum = sum + 1;
                        }
                    }
                }
                else
                {
                    for (int y = n - (k - 1); y <= n; y = y + 1)
                    {
                        if (y % 2 != 0)
                        {
                            sum = sum + 1;
                        }
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
}*/