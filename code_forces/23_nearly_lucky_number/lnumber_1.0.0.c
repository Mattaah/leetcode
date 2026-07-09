/*
    Codeforces 110A solution - v1.0.0 - 08/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    unsigned long long number = 0ULL, rest_tmp = 0ULL, rest_f = 0ULL, rest_diff = 0ULL, x = 10ULL, n = 0ULL;
    int pos = 0;

    scanf("%llu", &number);
    getchar();

    while (rest_f != number)
    {
        rest_tmp = number % x;
        rest_diff = rest_tmp - rest_f;

        pos = rest_diff / (x / 10);
        if (pos == 4 || pos == 7)
        { 
            n = n + 1; 
        }

        rest_f = rest_f + rest_diff;

        x = x * 10;
    }

    if (n == 4 || n == 7)
    { printf("YES\n"); }
    else
    { printf("NO\n"); }

    return (0);
}
