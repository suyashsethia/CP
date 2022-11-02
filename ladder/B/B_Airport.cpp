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
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vi a(m);
        FOR(i, 0, m)
        {
            cin >> a[i];
        }
        sort(ALL(a));
        int x, i = 0;
        x = a[i];
        int ans_min = 0, ans_max = 0;
        FOR(k, 0, n)
        {
            if (x == 0)
            {
                x = a[++i];
            }
            ans_min += x--;
        }
        i = 0;
        sort(ALL(a), greater<int>());
        FOR(k, 0, n)
        {
            ans_max += a[i];
            a[i]--;
            sort(ALL(a), greater<int>());
        }
        cout << ans_max << " " << ans_min;
    }
    return 0;
}