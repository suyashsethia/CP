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
        long int n;
        cin >> n;
        vector<pair<long int, long int>> a(n);
        long int max_range = 0, range = 0, index, l, r;
        FOR(i, 0, n)
        {
            cin >> a[i].F;
            cin >> a[i].S;
            range = a[i].S - a[i].F;
            if (range >= max_range)
            {
                max_range = range;
                l = a[i].F;
                r = a[i].S;
                index = i + 1;
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i].F < l || a[i].S > r)
            {
                flag = false;
                break;
            }
        }
        // if (n == 1)
        // {
        //     flag = true;
        // }
        if (!flag)
        {
            index = -1;
        }
        cout << index << endl;
    }
    return 0;
}