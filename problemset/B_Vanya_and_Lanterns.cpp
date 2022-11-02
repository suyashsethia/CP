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
double max(double a, double b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vi a;
        // a.PB(0);
        FOR(i, 0, n)
        {
            int k;
            cin >> k;
            a.PB(k);
        }
        // a.PB(l);
        sort(ALL(a));
        float ans = -1;
        FOR(i, 1, n)
        {
            int diff = a[i] - a[i - 1];
            if (diff > ans)
            {
                ans = diff;
            }
        }
        ans = max(max(ans / 2, float(a[0] - 0)), float(l - a[n - 1]));
        // if (ans < max(a[0] - 0, l - a[n - 1]))
        // {
        //     ans = max(a[0] - 0, l - a[n - 1]);
        // }
        // cout <<setprecision(8);
        cout << ans  << endl;
    }
    return 0;
}

