#include <stdio.h>

int main()
{
    int c_prime = 0, interval = 0, left = 0, right = 0, x = 0;
    
    scanf("%d", &interval);
    getchar();

    if (1 <= interval && interval <= 100)
    {
        while (x < interval)
        {
            scanf("%d", &left);
            getchar();

            scanf("%d", &right);
            getchar();

            if (1 <= left && left <= right && right <= 1000000000)
            {
                if (left == 1 && right == 1)
                {
                    c_prime = 1;
                }
                else
                {
                    c_prime = right - left;
                }

                printf("%d\n", c_prime);
            }

            x = x + 1;
        }
    }

    return (0);
}
