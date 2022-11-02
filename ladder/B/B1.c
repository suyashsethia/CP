#include <stdio.h>
#include <string.h>
int main()
{
    int n, t;
    char a[51];
    scanf("%d %d", &n, &t);
    scanf("%s", a);
    while (t > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] == 'B')
            {
                if (a[i + 1] == 'G')
                {
                    char temp = a[i + 1];
                    a[i + 1] = a[i];
                    a[i] = temp;
                    i++;
                }
            }
        }
        t--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
}