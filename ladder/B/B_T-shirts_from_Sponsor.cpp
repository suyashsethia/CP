#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define MP make_pair
#define PB push_back
#define S second
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi
        // int s, m, l, xl, xxl;
        int t = 1;
    // cin >> t;
    // map<string, int> S = {"S", 0};

    while (t--)
    {
        int k;

        // cin >> s >> m >> l >> xl >> xxl;
        int arr[5];
        FOR(i, 0, 5)
        {
            cin >> arr[i];
        }
        cin >> k;
        map<string, int> mapp;
        mapp["S"] = 0;
        mapp["M"] = 1;
        mapp["L"] = 2;
        mapp["XL"] = 3;
        mapp["XXL"] = 4;
        vector<string> maap(5);
        maap[0] = "S";
        maap[1] = "M";
        maap[2] = "L";
        maap[3] = "XL";
        maap[4] = "XXL";

        FOR(i, 0, k)
        {
            string c;
            cin >> c;
            int g = mapp[c];
            if (arr[g] > 0)
            {
                cout << maap[g] << endl;
                arr[g]--;
                continue;
            }
            while (true)
            {
                if (g < 4 && arr[g + 1] > 0)
                {
                    cout << maap[g + 1] << endl;
                    arr[g + 1]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g > 0 && arr[g - 1] > 0)
                {
                    cout << maap[g - 1] << endl;
                    arr[g - 1]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g < 3 && arr[g + 2] > 0)
                {
                    cout << maap[g + 2] << endl;
                    arr[g + 2]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g > 1 && arr[g - 2] > 0)
                {
                    cout << maap[g - 2] << endl;
                    arr[g - 2]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g < 2 && arr[g + 3] > 0)
                {
                    cout << maap[g + 3] << endl;
                    arr[g + 3]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g > 2 && arr[g - 3] > 0)
                {
                    cout << maap[g - 3] << endl;
                    arr[g - 3]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g < 1 && arr[g + 4] > 0)
                {
                    cout << maap[g + 4] << endl;
                    arr[g + 4]--;
                    // flag = false;
                    break;
                    // continue;
                }
                else if (g > 3 && arr[g - 4] > 0)
                {
                    cout << maap[g - 4] << endl;
                    arr[g - 4]--;
                    // flag = false;
                    break;
                    // continue;
                }
            }
        }
    }
    return 0;
}
