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
    JALDI jaldi;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool flag = true;
        vi d(m);
        int count = 0;
        FOR(i, 0, m)
        {
            int k;
            cin >> k;
            d[i] = k - 1;
            if (d[i] == 0 || d[i] == n - 1)
            {
                cout << "NO" << endl;
                return 0;
                // flag = false;
            }
        }
        sort(ALL(d));
        FOR(i, 1, m)
        {

            if (d[i] - d[i - 1] == 1)
            {
                count++;
                if (count == 2)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}