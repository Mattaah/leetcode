/*
    Codeforces 71A solution - v1.0.0 - 28/06/2026
    Author: Mattah
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char word[100] = "";
    int length = 0;
    int n = 0;
    int x = 0;

    scanf("%d", &n);
    getchar();

    if (1 <= n && n <= 100)
    {
        while (x < n)
        {
            scanf("%s", word);
            getchar();

            length = strlen(word);
            if (length > 10)
            {
                printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
            }
            else
            {
                printf("%s\n", word);
            }
            x = x + 1;
        }
    }

    return (0);
}
