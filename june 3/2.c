#include <stdio.h>
long long int counter(long long int a)
{
    long long int count = 0;
    while (a > 0)
    {
        if (a % 2 != 0)
        {
            break;
        }
        a = a / 2;
        count++;
    }
    return count;
}
int main()
{
    int t;
    // printf("%lld",counter(24));
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        long long int odd = 0, even = 0, count = 0, min_counter;
        for (long long int j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);
            // printf("%lld",a[i]);
            if (a[j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == 0)
        {
            printf("0\n");
        }
        else if (odd > 0)
        {
            printf("%lld\n", even);
        }
        else
        {
            min_counter = counter(a[0]);
            for (long long int j = 1; j < n; j++)
            {
                if (counter(a[j]) < min_counter)
                {
                    min_counter = counter(a[j]);
                }
            }
            // printf("%lld")
            printf("%lld\n", min_counter + n - 1);
        }
    }
    return 0;
}