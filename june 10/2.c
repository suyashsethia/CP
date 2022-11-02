#include <stdio.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], dupl[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            dupl[j] = a[j];
        }
        qsort(dupl, n, sizeof(long long int), cmpfunc);
        for (int j = 0; j < n; j++)
        {
            while (j < n - 1 )
            {
                if (dupl[j] != a[j])
                {
                    printf("%d", dupl[j]);
                    break ;
                }
                j++ ;
            }
            
        }
    }
}