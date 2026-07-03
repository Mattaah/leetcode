#include <stdio.h>
#include <string.h>

int main()
{
    char word[100] = "", c = ' ';
    int count_lower = 0, count_upper = 0, pos_lower[100], pos_upper[100], length = 0;

    scanf("%s", word);
    getchar();

    length = strlen(word);
    for (int x = 0; x < length; x = x + 1)
    {
        c = word[x];
        if ('a' <= c && c <= 'z')
        {
            pos_lower[count_lower] = x;
            count_lower = count_lower + 1;
        }
        else if ('A' <= c && c <= 'Z')
        {
            pos_upper[count_upper] = x;
            count_upper = count_upper + 1;
        }
    }

    if (count_lower >= count_upper)
    {
        for (int a = 0; a < count_upper; a = a + 1)
        {
            word[pos_upper[a]] = word[pos_upper[a]] + 32;
        }
    }
    else
    {
        for (int w = 0; w < count_lower; w = w + 1)
        {
            word[pos_lower[w]] = word[pos_lower[w]] - 32;
        }
    }

    printf("%s\n", word);

    return (0);
}
