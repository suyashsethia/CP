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
        int n;
        cin >> n;

        vi a(n);
        // int max = -1 * INT_MAX;
        // int min = INT_MAX;
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        int cons_max = 0;
        int maxx = 0;
        FOR(i, 1, n)
        {
            int cons = a[i - 1] - a[i];
            if (cons > cons_max)
            {
                cons_max = cons;
            }
            if (a[i] > maxx)
            {
                maxx = a[i];
            }
        }
        int minn = INT_MAX;
        FOR(i, 0, n - 1)
        {
            if (a[i] < minn)
            {
                minn = a[i];
            }
        }
        int ans = max(maxx - a[0], max(cons_max, a[n - 1] - minn));
        if (n == 1)
        {
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}