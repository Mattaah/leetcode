#include <stdio.h>

int main(int argc, int *argv[])
{
    int m = 0, n = 0, r = 0;

    scanf("%d", &m);
    getchar();
    
    scanf("%d", &n);
    getchar();

    if (1 <= m && m <= n && n <= 16)
    { r = (m * n) / (2 * 1); printf("%d\n", r); }
    
    return (0);
}
