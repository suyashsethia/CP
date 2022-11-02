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
        bool flag = false;
        int n;
        cin >> n;
        vll a(n,0);
        vll o(n,0);
        // vi fr;
        // vi fl;
        ll curr = 0;
        FOR(i, 0, n)
        {
            char k;
            cin >> k;
            if (k == 'R')
            {
                curr += n - i - 1;
                a[i] = n - i - 1;
                // fr.PB(n - i - 1);
            }
            else
            {
                curr += i;
                a[i] = i;
                // fl.PB(i);
            }
            o[i] = max(n - i - 1, i) - a[i];
        }
        sort(ALL(o), greater<int>());
        ll ans = curr;
        FOR(i, 0, n)
        {
            ans += o[i];
            cout << ans << " ";
        }
        nl;
    }
    return 0;
}
