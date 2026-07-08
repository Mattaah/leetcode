/*
    Codeforces 41A solution - v1.0.0 - 07/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char string_1[120] = "", string_2[120] = "";
    int length_1 = 0, length_2 = 0, x = 0, y = 0;
    bool r = true;

    scanf("%s", string_1);
    getchar();

    scanf("%s", string_2);
    getchar();

    length_1 = strlen(string_1);
    length_2 = strlen(string_2);

    if (length_1 != length_2)
    { printf("NO\n"); }
    else
    { 
        x = 0;
        y = length_1 - 1;
        while (r && x < length_1)
        {
            r = string_2[y] == string_1[x];

            x = x + 1;
            y = y - 1;
        }

        if (r)
        { printf("YES\n"); }
        else
        { printf("NO\n"); }
    }

    return (0);
}
