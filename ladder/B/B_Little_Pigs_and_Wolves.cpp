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

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<char, int> maap;
        maap['P'] = 1;
        maap['W'] = 2;
        maap['.'] = 3;
        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                char k;
                cin >> k;
                a[i][j] = maap[k];
            }
        }
        int ans = 0;
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                if (a[i][j] == 2)
                {
                    if (i != 0 && a[i - 1][j] == 1)
                    {
                        ans++;
                    }
                    else if (j != 0 && a[i][j - 1] == 1)
                    {
                        ans++;
                    }
                    else if (a[i][j + 1] == 1 || a[i + 1][j] == 1)
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}