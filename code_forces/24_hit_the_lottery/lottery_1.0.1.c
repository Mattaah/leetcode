/*
    Codeforces 996A solution - v1.0.1 - 08/07/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int cash = 0, rest_tmp = 0, rest_f = 0, rest_diff = 0, c = 0, q = 0, x = 10;

    scanf("%d", &cash);
    getchar();

    while (rest_f != cash)
    {
        rest_tmp = cash % x;
        rest_diff = rest_tmp - rest_f;

        rest_f = rest_f + rest_diff;

        while (rest_diff > 0)
        {
            if (rest_diff - 100 >= 0)
            { rest_diff = rest_diff - 100; q = q + 1; }
            else if (rest_diff - 20 >= 0)
            { rest_diff = rest_diff - 20; q = q + 1;  }
            else if (rest_diff - 10 >= 0)
            { rest_diff = rest_diff - 10; q = q + 1;  }
            else if (rest_diff - 5 >= 0)
            { rest_diff = rest_diff - 5; q = q + 1;   }
            else if (rest_diff - 1 >= 0)
            { rest_diff = rest_diff - 1; q = q + 1; }
        }

        x = x * 10;
    }

    printf("%d\n", q);

    return (0);
}
