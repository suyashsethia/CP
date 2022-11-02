#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        string s;
        int n;
        cin >> n;
        cin >> s;
        vector<int> count(26, 0);
        int ans = 2 * k;

        for (int i = 0; i < k; i++)
        {
            count[s[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 1)
            {
                ans = ans - (count[i] - 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}