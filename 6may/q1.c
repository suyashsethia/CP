#include <stdio.h>
int modd(int a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}
int main()
{
    int t;
    scanf("%d", &t);
    int a[t], ans[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    int curr = 99999;
    int act = 0;

    for (int i = 0; i < t; i++)
    {

        ans[i] = modd(a[i] - a[(i + 1) % (t)]);

        if (ans[i] < curr)
        {
            curr = ans[i];
            act = i;
        }
    }
    printf("%d %d", act + 1, ((act + 1) % t) + 1);
    return 0;
}