#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans += b[i] * b[i];
        }
        else if (i % 2 == 1)
        {
            ans -= b[i] * b[i];
        }
    }
    cout << (ans * 3.1415926536);
    return 0;
}