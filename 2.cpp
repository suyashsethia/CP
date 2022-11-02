#include <bits/stdc++.h>
using namespace std;
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);

int main()
{
    JALDI jaldi;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> countn(1000000);
        map<int, int> count;
        int total = 0;
        vector<int> array(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            array[n - i - 1] = k;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            count[array[i]]++;
            if (count[array[i]] > 1)
            {
                ans = n - i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}