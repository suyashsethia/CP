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
vi a(1000001, -1);
int dice(vi &die, int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (a[n] != -1)
    {
        return a[n];
    }
    if (n == 0)
    {
        return a[n] = 1;
    }
    ll ans = 0;
    FOR(i, 1, 7)
    {
        if (n - die[i] < 0)
        {
            break;
        }
        ans += dice(die, n - die[i]) % MOD;
    }
    return a[n] = ans % MOD;
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
        int n;
        cin >> n;
        a[1] = 1;
        vi die(6);
        FOR(i, 1, 7)
        {
            die[i] = i;
            // int l = dice(die[i]);
            // a[die[i]] = l + 1;
        }
        dice(die, n);
        cout << a[n] << endl;
    }
    return 0;
}