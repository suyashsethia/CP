#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d;
    cin >> d;
    int mon;
    cin >> mon;
    int day_mon[mon];
    int ans = 0;
    for (int i = 0; i < mon; i++)
    {
        cin >> day_mon[i];
        if (i != mon - 1)
        {
            ans += d - day_mon[i];
        }
    }
    cout << ans << endl;
}