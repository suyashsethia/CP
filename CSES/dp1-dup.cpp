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
#define MOD 1000000007
ll m, n, q;

vll a(1000007, -1);
int func(vi f, int k)
{
    if (a[k] != -1)
    {
        return a[k];
    }
    if (k == m)
    {
        return 1;
    }
    if (k > m)
    {
        return 0;
    }

    ll ans = 0;
    FOR(i, 0, n)
    {

        if (k + f[i] > m)
            break;
        ans += func(f, k + f[i]);
        ans %= MOD;
    }
    return a[k] = ans;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        vi f;

        cin >> n >> m;
        FOR(i, 0, n)
        {
            int k;
            cin >> k;
            f.PB(k);
        }
        sort(ALL(f));
        // FOR(i, 0, n)
        // {
        //     int l = func(f, f[i], f[0]);
        //     a[f[i]] = 1 + l;
        // }
        ll ans = func(f, 0);
        cout << ans % MOD << endl;
    }
    return 0;
}