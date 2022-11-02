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
    // cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n;
        vi a, b;
        FOR(i, 0, n)
        {
            int j;
            cin >> j;
            a.PB(j);
        }
        cin >> m;
        FOR(i, 0, m)
        {
            int j;
            cin >> j;
            b.PB(j);
        }
        int k = 0;
        sort(ALL(a));
        sort(ALL(b));
        int ans = 0;
        FOR(i, 0, n)
        {
            FOR(j, k, m)
            {
                if ((b[j] - 1) == a[i] || (b[j] + 1) == a[i] || b[j] == a[i])
                {
                    ans++;
                    k = j + 1;
                    break;
                }
            }
            // if (k == m-1)
            // {
            //     break;
            // }
        }
        cout << ans << endl;
    }
    return 0;
}