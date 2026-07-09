#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0, x = 0, value = 0;
    bool r = true;

    scanf("%d", &n);
    getchar();

    while (r && x < n)
    {
        scanf("%d", &value);
        getchar();

        r = (value == 0);

        x = x + 1;
    }

    if (r)
    { printf("EASY\n"); }
    else 
    { printf("HARD\n"); }


    return (0);
}
