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
    // cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long m;
        cin >> m;
        vector<long long> k = a;
        sort(k.begin(), k.end());
        // prefix sum
        vll prefix_a(n + 2);
        vll prefix_k(n + 2);
        prefix_a[0] = 0;
        prefix_k[0] = 0;
        prefix_a[1] = a[0];
        prefix_k[1] = k[0];
        for (ll i = 2; i < n+1; i++)
        {
            prefix_a[i] = prefix_a[i - 1] + a[i - 1];
            prefix_k[i] = prefix_k[i - 1] + k[i - 1];
        }
        while (m--)
        {

            long long type, l, r;
            cin >> type >> l >> r;

            if (type == 1)
            {
                long long ans = 0;
                // for (long long i = l - 1; i < r; i++)

                ans = prefix_a[r] - prefix_a[l-1];

                cout << ans << endl;
            }
            else
            {
                long long ans = 0;
                // for (long long i = l - 1; i < r; i++)

                // ans += k[i];
                ans = prefix_k[r] - prefix_k[l-1];

                // }
                cout << ans << endl;
            }
        }
        return 0;
    }
}