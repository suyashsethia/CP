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
    // cin >> t;
    while (t--)
    {
        vector<vector<int>> a(3, vector<int>(3));
        FOR(i, 0, 3)
        {
            FOR(j, 0, 3)
            {
                cin >> a[i][j];
            }
        }
        int x, y, z;
        y = a[1][0] + a[2][0] + a[0][2] + a[1][2] - a[0][1] - a[2][1];
        y = y / 2;
        x = y - a[1][0] - a[2][0] + a[0][1] + a[2][1];
        z = y - a[0][2] - a[1][2] + a[0][1] + a[2][1];
        a[0][0] = x;
        a[1][1] = y;
        a[2][2] = z;
        FOR(i, 0, 3)
        {
            FOR(j, 0, 3)
            {
                cout << a[i][j] << " ";
            }
            nl;
        }
    }
    return 0;
}