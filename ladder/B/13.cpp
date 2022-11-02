#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    vector<long long int> a(m + 1);
    for (long long int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    long long int ans = a[0] - 1;
    for (long long int i = 1; i < m; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += n - (a[i - 1] - a[i]);
        }
        else
        {
            ans += a[i] - a[i - 1];
        }
    }
    cout << ans;
}