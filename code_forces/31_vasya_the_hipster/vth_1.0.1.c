/*
    Codeforces 581A solution - v1.0.1 - 10/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 0, p_y = 0, p_z = 0, limit = 0;

    scanf("%d", &a);
    getchar();

    scanf("%d", &b);
    getchar();

    if (a > b)
    { limit = b; }
    else
    { limit = a; }

    p_y = limit;

    a = a - limit;
    b = b - limit;

    p_z = a / 2 + b / 2;

    printf("%d %d\n", p_y, p_z);

    return (0);
}
