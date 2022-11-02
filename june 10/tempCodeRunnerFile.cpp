// #include <iostream>
#include<bits/c++.h>
// #include <string>
// #include <algorithm>
// #include<math.h>
using namespace std;
int minn(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        string x, y, c;
        cin >> n >> m >> k;
        cin >> x >> y;
        int count_x = 0, count_y = 0, flag = 0, flagg = 0;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int l = n;
        int f = m;
        int j = 0;
        int z = 0;
        while (1)
        {
            if (flagg == 1 || (x[j] < y[z]))
            {
                c += x[j];
                count_x++;
                if (count_x == k)
                {
                    flag = 1;
                }
                l--;
                j++;
            }
            if (l == 0)
            {
                break;
            }
            if (flagg == 1)
            {
                flagg = 0;
                count_y = 0;
            }
            if (flag == 1 || (y[z] <= x[j]))
            {
                c = c + y[z];
                count_y++;
                if (count_y == k)
                {
                    flagg = 1;
                }
                f--;
                z++;
            }
            if (flag == 1)
            {
                flag = 0;
                count_x = 0;
            }
            if (f == 0)
            {
                break;
            }
        }
        cout << c << "\n";
    }
    return 0 ;
}