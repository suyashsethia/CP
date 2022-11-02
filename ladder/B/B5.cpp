#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n], price[n], flag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        flag[i] = 1;
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j] && b[i] < b[j] && c[i] < c[j])
            {
                flag[i] = 0;
            }
        }
    }
    int min_price = 10000000;
    int min_indx = -1;
    for (int j = 0; j < n; j++)
    {
        if (flag[j] == 1 && price[j] < min_price)
        {
            min_indx = j;
            min_price = price[j];
        }
    }
    cout << min_indx + 1 << endl;
}