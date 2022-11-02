#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ans[t];
    char a[100000];
    int bool = 1;
    for (int i = 0; i < t; i++)
    {

        scanf("%s", a);
        for (int j = 0; j < strlen(a) - 1; j++)
        {
            if (a[j] == 'B')
            {
                bool = 0;
            }
        }
        if (bool)
        {
            if (a[strlen(a) - 1] == 'B')
            {
                ans[i] = 1;
                // printf("YES\n");
            }
        }
        else
        {
            ans[i] = 0;
            // printf("NO\n");
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}