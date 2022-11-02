#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int ans1 = n + n - 1;

    for (int i = 0; i < n - 1; i++)
    {

        ans1 += abs(h[i + 1] - h[i]);
    }
    cout << ans1 + h[0] << endl;
}