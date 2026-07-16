/*
    Codeforces 1985A solution - v1.0.0 - 15/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    char f_word[4] = "" ;
    char s_word[4] = "" ;
    char c         = ' ';
    int n          =   0;
    
    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%s", f_word);
        getchar();

        scanf("%s", s_word);
        getchar();

        c = f_word[0];
        f_word[0] = s_word[0];
        s_word[0] = c;

        printf("%s %s\n", f_word, s_word);
    }
    
    return (0);
}
