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
        int n, x;
        int odd = 0;
        int even = 0;
        cin >> n >> x;
        vi a(n);
        FOR(i, 0, n)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        string ans;
        bool flag = false;
        if (n > x)
        {
            if (x % 2 == 0)
            {
                if (odd > 0 && even > 0)
                {
                    ans = "Yes";
                }
                else
                {
                    ans = "No";
                }
            }
            else
            {
                if (odd > 0)
                {
                    ans = "Yes";
                }
                else
                {
                    ans = "No";
                }
            }
        }
        else if (n == x)
        {
            if (odd % 2 == 1)
            {
                ans = "Yes";
            }
            else
            {
                ans = "No";
            }
        }
        else
        {
            ans = "No";
        }
        cout << ans << endl;
    }
    return 0;
}