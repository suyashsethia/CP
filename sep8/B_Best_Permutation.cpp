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
        if (n < 3)
        {
            FOR(i, 1, n + 1)
            {
                cout << i << " ";
            }
            nl;
            continue;
        }
        if (n == 3)
        {
            cout << 2 << " " << 1 << " " << 3;
            nl;
            continue;
        }

        FOR(i, 1, n - 3)
        {
            cout << i << " ";
        }
        cout << n - 2 << " " << n - 3 << " " << n - 1 << " " << n;
        nl;
        // if (n % 2 == 1)
        // {
        //     if (n % 3 == 2)
        //     {
        //         FOR(i, 1, n + 1)
        //         {
        //             cout << i << " ";
        //         }
        //     }
        // }
        // else
        // {
        //     FOK(i, n - 2, 0)
        //     {
        //         cout << i << " ";
        //     }
        //     cout << n - 1 << " " << n << " ";
        // }

        // nl;
    }
    return 0;
}