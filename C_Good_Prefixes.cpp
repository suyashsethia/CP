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
        vll maxx(n+1, -1);
        vll summ(n+1, 0);
        int h;
        cin >> h;
        maxx[0] = h;
        summ[0] = h;
        int ans = 0;
        if (h == 0)
        {
            ans++;
        }

        for (int i = 1; i < n; i++)
        {
            ll g;
            cin >> g;

            summ[i] = summ[i - 1] + g;
            maxx[i] = max(g, maxx[i - 1]);
            if (summ[i] == maxx[i]*2)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}