#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char *string = NULL;
    bool *verify = NULL;
    bool s       = true;
    int n = 0, z =    0;

    scanf("%d", &n);
    getchar();

    string = (char *)malloc((n + 1) * sizeof(char));
    if (string)
    {
        scanf("%s", string);
        getchar();

        if (1 <= n && n <= 100)
        {
            if (n < 26)
            { printf("NO\n"); }
            else
            {
                verify = (bool *)calloc(26, sizeof(bool));
                if (verify)
                {
                    for (int x = 0; x < n; x = x + 1)
                    {
                        for (int y = 97; y <= 122; y = y + 1)
                        {
                            if (string[x] == y || string[x] == y - 32)
                            { verify[y - 97] = true; }
                        }
                    }

                    while (s && z < 26)
                    {
                        s = verify[z];
                        z = z + 1;
                    }

                    if (s)
                    { printf("YES\n"); }
                    else
                    { printf("NO\n"); }

                    free(verify);
                }
            }
        }

        free(string);
    }

    return (0);
}
