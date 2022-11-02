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
        bool flag = true;
        int n;
        cin >> n;
        vi a(n);
        vi a2(n);
        FOR(i, 0, n)
        {
            char k;
            cin >> k;
            if (k == 'R')
            {
                a[i] = 0;
            }
            else
            {
                a[i] = 1;
            }
        }
        FOR(i, 0, n)
        {
            char g;
            cin >> g;
            if (g == 'R')
            {
                a2[i] = 0;
            }
            else
            {
                a2[i] = 1;
            }
            if (a[i] != a2[i])
            {
                flag = false;
                // break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}