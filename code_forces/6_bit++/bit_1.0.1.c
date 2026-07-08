/*
    Codeforces 282A solution - v1.0.1 - 02/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    char s[4] = "";
    int count = 0, n = 0, x = 0;

    scanf("%d", &n);
    getchar();

    if (1 <= n && n <= 150)
    {
        while (x < n)
        {
            scanf("%s", s);
            getchar();

            if ((s[0] == '-' && s[1] == '-' && s[2] == 'X') || (s[0] == 'X' && s[1] == '-' && s[2] == '-'))
            {
                count = count - 1;
            }
            else if ((s[0] == '+' && s[1] == '+' && s[2] == 'X') || (s[0] == 'X' && s[1] == '+' && s[2] == '+'))
            {
                count = count + 1;
            }
            x = x + 1;
        }
        printf("%d\n", count);
    }

    return (0);
}
