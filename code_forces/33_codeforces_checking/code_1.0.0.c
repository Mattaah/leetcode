/*
    Codeforces 1791A solution - v1.0.0 - 11/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int n = 0;
    char c = ' ';

    scanf("%d", &n);
    getc(stdin);    
    
    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%c", &c);
        getc(stdin);

        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || 
            c == 'f' || c == 'r' || c == 's')
        { printf("YES\n"); }
        else
        { printf("NO\n"); }
    }

    return (0);
}
