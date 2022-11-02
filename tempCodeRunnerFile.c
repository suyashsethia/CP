#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int a[n];
    for (int i = 0; i < t; i++)
    {
        long long int sum = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        if (sum == 1)
        {
            printf("maomao90\n");
        }
        else if (sum % 2 == 0)
        {
            printf("maomao90\n");
        }
        else
        {
            printf("errorgorn");
        }
    }
    return 0;
}