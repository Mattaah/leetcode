/*
    Codeforces 112A solution - v1.0.0 - 01/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <string.h>

#define BIG 100

char toLower(char c)
{
    char lower = c;

    if (65 <= c && c <= 90)
    {
        lower = c + 32;
    }

    return (lower);
}

int main()
{
    char string_1[BIG] = "", string_2[BIG] = "", char_1 = ' ', char_2 = ' ';
    int length = 0, cmp = 0;

    scanf("%s", string_1);
    getchar();
    scanf("%s", string_2);
    getchar();

    length = strlen(string_1);
    for (int x = 0; x < length; x = x + 1)
    {
        char_1 = toLower(string_1[x]);
        char_2 = toLower(string_2[x]);

        if (char_1 != char_2 && char_1 < char_2)
        {
            cmp = -1;
            x = length;
        }
        else if (char_1 != char_2 && char_1 > char_2)
        {
            cmp = 1;
            x = length;
        }
    }

    printf("%d\n", cmp);

    return (0);
}
