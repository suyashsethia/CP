#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, r, b;
        scanf("%d%d%d", &n, &r, &b);
        char ans[150];
        int count = 0;
        while (r > 0)
        {

            int val = r / b;
           // int val = ceil(vall);
            //val = (int)val;
            for (int i = 0; i < val; i++)
            {
                // ans[i] = 'R';
                printf("R");
                count++;
            }
            // ans[val] = 'B';
            if (count < n)
            {
                printf("B");
                count++;
            }
            r = r - val;
            b--;
            // val = n - val;
        }
        printf("\n");
    }
}