#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int f = n ;
    int count[5001];
    int ans = 0;
    for (int i = 0; i <= 5001; i++)
    {
        count[i] = 0;
    }
    while (n > 0)
    {
        cin >> k;
        count[k]++;
        if (count[k] > 1 || k>f)
        {
            ans++;
        }
        n--;
    }
    cout << ans << endl;
    return 0 ;
}