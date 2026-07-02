#include <stdio.h>

int main()
{
    char statement[3] = "";
    int count = 0, n = 0, x = 0;

    scanf("%d", &n);
    getchar();

    if (1 <= n && n <= 150)
    {
        while (x < n)
        {
            scanf("%s", statement);
            getchar();

            if ((statement[0] == '-' && statement[1] == '-' && statement[2] == 'X') || (statement[0] == 'X' && statement[1] == '-' && statement[2] == '-'))
            {
                count = count - 1;
            }
            else if ((statement[0] == '+' && statement[1] == '+' && statement[2] == 'X') || (statement[0] == 'X' && statement[1] == '+' && statement[2] == '+'))
            {
                count = count + 1;
            }

            x = x + 1;
        }
        printf("%d\n", count);
    }

    return (0);
}
