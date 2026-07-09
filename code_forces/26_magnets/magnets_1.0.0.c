/*
    Codeforces 344A solution - v1.0.0 - 09/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    char s_b[4] = "", s_a[4] = "";
    int n = 0, x = 0, group = 0;

    scanf("%d", &n);
    getchar();

    s_b[0] = ' '; // arbitrary value
    s_b[1] = ' '; // arbitrary value

    while (x < n)
    {
        scanf("%s", s_a);
        getchar();

        if (s_b[1] == s_a[0])
        { group = group + 1; }

        s_b[0] = s_a[1];
        s_b[1] = s_a[1];

        x = x + 1;
    }

    group = group + 1;

    printf("%d\n", group);

    return (0);
}
