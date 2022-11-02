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
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        vi diff(n, 0);
        int countz = 0;
        bool flag = false;
        FOR(i, 0, n / 2)
        {
            diff[i] =  a[n - i - 1]-a[i];
            if (diff[i] == 0)
            {
                countz++;
            }
            if (diff[i] < 0)
            {
                flag = true;
                break;
            }
        }
        int max = 0;
        FOR(i, 0, n / 2 - 1)
        {
            if (diff[i] > max)
            {
                max = diff[i];
            }
            if (diff[i] < diff[i + 1])
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << -1;
            nl;
            continue;
        }
        if (countz == n / 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    return 0;
}