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
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;

    while (t--)
    {
        int ans = 0;

        int n;
        cin >> n;
        int x1 = 0, x2 = 0;
        int y1 = 0, y2 = 0;
        FOR(i, 0, n)
        {
            int x, y;
            cin >> x >> y;
            if (x == 0)
            {
                if (y < 0)
                {
                    if (y2 > y)
                    {
                        y2 = y;
                    }
                }
                else
                {
                    if (y1 < y)
                    {
                        y1 = y;
                    }
                }
            }
            if (y == 0)
            {
                if (x < 0)
                {
                    if (x2 > x)
                    {
                        x2 = x;
                    }
                }
                else
                {
                    if (x > 0)
                    {
                        if (x1 < x)
                        {
                            x1 = x;
                        }
                    }
                }
            }
        }
            ans += 2 * (abs(x1) + abs(y1) +abs(x2)+abs(y2));

        cout << ans << endl;
    }

    return 0;
}