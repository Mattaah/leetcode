/*
    Codeforces 732A solution - v1.0.0 - 03/08/2026
    Author: Mattah
*/

#include <stdio.h>

int main()
{
    int price = 0, diff_coin = 0, sum = 0, shovel = 0;

    scanf("%d %d", &price, &diff_coin);
    getchar();
    
    do
    {
        sum = sum + price;
        if ((sum - diff_coin) % 10 == 0)
        { sum = sum - diff_coin; }

        shovel = shovel + 1;
    } while (sum % 10 != 0);
    
    printf("%d\n", shovel);

    return (0);
}
