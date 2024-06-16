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
        ll n;
        cin >> n;
        vll a(n);
        FOR(i, 0, n)
        {

            cin >> a[i];
        }
        ll best;
        best = a[0];
        ll sum = best;
        FOR(i, 1, n)
        {
            ll curr = a[i];
            if (best < 0)
            {
                if (curr < 0 && curr >= best)
                {
                    sum -= best;
                    sum += curr;
                    best = curr;
                }
                if (curr >= 0)
                {
                    sum += curr;
                    best = curr;
                }
            }
            if (best >= 0)
            {
                if (curr > 0 && curr >= best)
                {
                    sum -= best;
                    sum += curr;
                    best = curr;
                }
                if (curr <= 0)
                {
                    sum += curr;
                    best = curr;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}