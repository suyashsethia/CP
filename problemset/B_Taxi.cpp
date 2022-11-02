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

        int n;
        cin >> n;
        vi a(n), count(5, 0);
        FOR(i, 0, n)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        int ans = 0;
        ans += count[4];
        int l1 = 0, l2 = count[2] % 2, l3 = 0;
        ans += (count[2] / 2);
        ans += (min(count[3], count[1]));

        l1 = count[1] - min(count[3], count[1]);
        l3 = count[3] - min(count[3], count[1]);
        if (l1 == 0)
        {
            ans += l3 + l2;
        }
        else
        {
            if (l1 % 4 == 3)
            {
                ans += (l1 / 4) + 1 + l2;
            }
            else if (l1 % 4 == 0)
            {
                ans += (l1 / 4) + l2;
            }
            else
            {
                ans += (l1 / 4) + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}