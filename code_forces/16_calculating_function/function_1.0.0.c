#include <stdio.h>

int main()
{
    unsigned long long n = 0ULL;
    long long f = 0LL;

    scanf("%llu", &n);
    getchar();

    f = (n + 1) / 2;

    if (n % 2 != 0)
    {
        f = -f;
    }

    printf("%lld\n", f);

    return (0);
}
