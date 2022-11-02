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
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // flag = true;

                for (int k = 0; k < m; k++)
                {
                    if (k != j)
                    {
                        if (a[i][j] == a[i][k])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                for (int k = 0; k < n; k++)
                {
                    if (k != i)
                    {
                        if (a[i][j] == a[k][j])
                        {
                            flag = false;
                            break;
                        }
                    }
                }
                if (flag)
                {
                    cout << a[i][j];
                }
                flag = true;
            }
        }
    }
    return 0;
}