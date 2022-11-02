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
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        int f = n / k;
        vector<vector<char>> a(n + 1, vector<char>(n + 1, '.'));
        int count = 0;
        for (int i = r; i<1000; i = (i + 1) % (n + 2))
        {
            if (i == 0)
            {
                i = 1;
            }
            int countr = 0;
            int m = 0;
            for (int j = c; j < 1000; j = (j + 1) % (n + 1))
            {
                if (j == 0)
                {
                    j = 1;
                }
                if (j == (c + ((f + 1) * m)) % (n + 1))
                {

                    m++;
                    a[i][j] = 'X';
                }
                else
                {
                    a[i][j] = '.';
                }
                count++;
                countr++;
                if (countr == n)
                {
                    break;
                }
            }
            c = (c + f) % (n + 1);
            if (c == 0)
            {
                c = 1;
            }
            if (count == n * n)
            {
                break;
            }
        }
        FOR(i, 1, n + 1)
        {
            FOR(j, 1, n + 1)
            {
                cout << a[i][j];
            }
            nl;
        }
    }
    return 0;
}