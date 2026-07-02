#include <stdio.h>
#include <string.h>

int main()
{
    char summand[100] = "";
    char l_element = ' ';
    char b_element = ' ';

    scanf("%s", summand);
    getchar();

    for (int x = 0; x < strlen(summand); x = x + 2)
    {
        l_element = summand[x];
        for (int y = x + 2; y < strlen(summand); y = y + 2)
        {
            if (summand[y] < l_element)
            {
                b_element = summand[x];
                l_element = summand[y];
                summand[x] = l_element;
                summand[y] = b_element;
            }
        }
    }
    printf("%s\n", summand);

    return (0);
}
