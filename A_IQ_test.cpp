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
    int ans_e, ans_odd;
    int even = 0, odd = 0;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            even++;
            ans_e = i + 1;
        }
        else
        {
            odd++;
            ans_odd = i + 1;
        }
    }
    if (odd == 1)
    {
        cout << ans_odd << endl;
    }
    else
    {
        cout << ans_e << endl;
    }
    return 0;
}