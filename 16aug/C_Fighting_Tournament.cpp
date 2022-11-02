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

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        deque<ll> a;
        vll a_lite(n);
        FOR(i, 0, n)
        {

            // ll f;
            cin >> a_lite[i];

            a.push_back(a_lite[i]);
        }
        ll ans;
        while (q--)
        {
            ans = 0;
            ll i, k;
            cin >> i >> k;
            ll tosee = a[i - 1];
            while (k--)
            {
                ll e = a.front();
                a.pop_front();
                ll r = a.front();
                a.pop_front();
                if (e > r)
                {
                    a.push_front(e);
                    if (e == tosee)
                    {
                        ans++;
                    }
                }
                else
                {
                    a.push_back(r);
                }
            }

            cout << ans << endl;
            FOR(i, 0, n)
            {

                // ll f;
                a[i] = a_lite[i];
            }
        }
    }
    return 0;
}