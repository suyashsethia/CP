#include <stdio.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int abs(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    qsort(a, n, sizeof(int), cmpfunc);
    for (int i = 0; i < m; i++)
    {
        if (a[i] <= 0)
        {

            sum += a[i];
        }
    }
    printf("%d", abs(sum));
}