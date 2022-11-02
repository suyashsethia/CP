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
vi a(10000001, -1);
int minn(vi &coins, int x)
{
    if (a[x] != -1)
    {
        return a[x];
    }
    if (x == 0)
    {
        return 0;
    }
    if (x < 0)
    {
        return -1 * (INT_MAX);
    }
    int m = INT_MAX;
    bool flag = true;
    FOR(i, 0, coins.size())
    {
        int ans = 0;
        if (x - coins[i] < 0)
        {
            continue;
        }
        flag = false;
        ans = 1 + minn(coins, x - coins[i]);
        m = min(ans, m);
    }
    if (flag)
    {
        return a[x] = -1;
    }
    return a[x] = m;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vi coins;
        FOR(i, 0, n)
        {
            int k;
            cin >> k;
            coins.PB(k);
            a[k] = 1;
        }
        sort(ALL(coins), greater<int>());
        minn(coins, x);
        if (a[x] < 0)
        {
            a[x] = -1;
        }
        cout << a[x] << endl;
    }
    return 0;
}