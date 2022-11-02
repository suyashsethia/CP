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
// ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi x;
        vi ans;
        x.PB(0);
        int k = 0;
        FOR(i, 1, n + 1)
        {
            int y;
            cin >> y;
            x.PB(y);
            // cin >> x[i];
        }
        sort(ALL(x));
        FOR(i, 1, n + 1)
        {

            for (int j = x[i - 1]; j < x[i]; j++)
            // FOR(j, x[i - 1], x[i]);
            {
                ans.PB(k);
            }
            k++;
        }
        int q;
        cin >> q;
        ans.PB(n);
        FOR(i, 0, q)
        {
            int f;
            cin >> f;
            if (f > x[n])
            {
                f = x[n];
            }
            cout << ans[f] << endl;
            // cin >> m[i];
        }
    }
    return 0;
}