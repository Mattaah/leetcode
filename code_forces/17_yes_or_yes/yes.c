#include <stdio.h>

int main()
{
    char s[4] = "";
    int n     =  0;

    scanf("%d", &n);
    getchar();

    for (int x = 0; x < n; x = x + 1)
    {
        scanf("%s", s);
        getchar();

        if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's'))
        { printf("YES\n"); }
        else
        { printf("NO\n"); }
    }

    return (0);
}
