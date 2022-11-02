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
        int n, k;
        cin >> n >> k;
        vi a(n);
        int max = 0;
        int ans = 0;
        map<int, int> l;
        FOR(i, 0, n)
        {
            cin >> a[i];
            l[a[i]] = 1;
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        if (max == n)
        {
            ans = ((k) * (k - 1)) / 2;
            cout << ans;
            nl;
            continue;
        }
        int left = max - n;
        int f = k;
        int y = k - left;
        if (k <= left)
        {

            FOR(i, 1, max)
            {
                if (l[i] != 1)
                {
                    ans += (max - i);
                    f--;
                }
                if (f == 0)
                {
                    break;
                }
            }
        }
        else if (k > left)
        {
            ans += ((y) * (y - 1)) / 2;
            max = max + y;
            FOR(i, 1, max)
            {
                if (l[i] == 0)
                {
                    ans += (max - i);
                }
            }
        }
        cout << ans;
        nl;
    }

    return 0;
}