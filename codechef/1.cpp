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
        vi a(n);
        vi b(15);
        int max = 0;
        FOR(i, 0, n)
        {
            cin >> a[i];
            b[a[i]]++;
            if (max < b[a[i]])
            {
                max = b[a[i]];
            }
        }
        // sort(ALL(a));
        // int count = 1;
        // int ans = 0;
        // FOR(i, 0, n - 1)
        // {
        //     if (a[i] == a[i + 1])
        //     {
        //         count++;
        //     }
        //     else
        //     {
        //         if (count > ans)
        //         {
        //             ans = count;
        //             count = 1;
        //         }
        //     }
        // }
        // if (ans == 0)
        // {
        //     ans = count;
        // }
        cout << n - max;
        nl;
    }
    return 0;
}