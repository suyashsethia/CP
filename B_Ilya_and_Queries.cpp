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
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int m;
        cin >> m;
        vi l(m), r(m);
        FOR(i, 0, m)
        {
            cin >> l[i] >> r[i];
        }
        vi flag(s.length(), 0);
        FOR(i, 0, s.length() - 1)
        {
            if (s[i] == s[i + 1])
            {
                flag[i + 1] = flag[i] + 1;
            }
            else
            {
                flag[i + 1] = flag[i];
            }
        }
        FOR(i, 0, m)
        {
            int ans = 0;
            ans = flag[r[i]-1] - flag[l[i]-1];
            cout << ans;
            nl;
        }
    }
    return 0;
}