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
#define MOD 1000000007
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
    JALDI jaldi;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int total = 0;
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                char k;
                cin >> k;
                if (k == '1')
                {
                    a[i][j] = 1;
                    total++;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }
        int ans = 0;
        int min = INT_MAX;

        FOR(i, 0, n - 1)
        {
            FOR(j, 0, m - 1)
            {
                int noois = 0;
                if (a[i][j] == 1)
                {
                    noois++;
                }
                if (a[i + 1][j] == 1)
                {
                    noois++;
                }
                if (a[i][j + 1] == 1)
                {
                    noois++;
                }
                if (a[i + 1][j + 1] == 1)
                {
                    noois++;
                }
                // a[i + 1][j] = 0;
                // a[i][j + 1] = 0;
                // a[i + 1][j + 1] = 0;
                // a[i][j] = 0;
                if (noois < min)
                {
                    min = noois;
                    // ans += 2;
                }
                // else if (noois == 1)
                // {
                //     ans += 1;
                // }
                // noois = 0;
            }
            // ans += noois;
        }
        if (min == 3)
        {
            total++;
        }
        ans = (min >= 3) ? total - 2 : total;

        cout << ans;
        nl;
    }
    return 0;
}