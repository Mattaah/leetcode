#include <stdio.h>

int main()
{
    char word[1000] = "";

    scanf("%s", word);
    getchar();

    if ('a' <= word[0] && word[0] <= 'z')
    {
        word[0] = word[0] - 32;
    }

    printf("%s\n", word);
}
