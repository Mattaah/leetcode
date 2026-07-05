#include <stdio.h>

int main()
{
    int number = 0, result = 0, n = 0;

    scanf("%d", &number);
    getchar();

    scanf("%d", &n);
    getchar();

    if ((2 <= number && number <= 1000000000) && (1 <= n && n <= 50))
    {
        result = number;
        for (int x = 0; x < n; x = x + 1)
        {
            if (result % 10 != 0)
            { result = result - 1; }
            else
            { result = result / 10; }
        }

        printf("%d\n", result);
    }

    return (0);
}
