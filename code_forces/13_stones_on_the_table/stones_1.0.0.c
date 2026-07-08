/*
    Codeforces 266A solution - v1.0.0 - 03/07/2026
    Author: Mattah
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string = NULL;
    int n = 0, count = 0;

    scanf("%d", &n);
    getchar();

    string = (char *)malloc(n * sizeof(char));
    if (string)
    {
        scanf("%s", string);
        getchar();

        for (int x = 1; x < n; x = x + 2)
        {
            if (string[x - 1] == string[x])
            {
                count = count + 1;
            }
            if (string[x + 1] == string[x])
            {
                count = count + 1;
            }
        }

        printf("%d\n", count);
    }

    return (0);
}
