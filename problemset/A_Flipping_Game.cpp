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
        vi a(n);
        vi already(n, 0);
        int count = 0;
        FOR(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                count++;
            }
            already[i + 1] = count;
        }
        vi a_c(n);
        vi already_c(n, 0);
        int count_c = 0;

        FOR(i, 0, n)
        {
            if (a[i] == 1)
            {
                count_c++;
            }
            already_c[i] = count_c;
        }
        int ans = 0;
        FOR(i, 0, n)
        {
            int max = 0;
            int curr = 0;
            FOR(j, i, n)
            {
                if (a[j] == 1)
                {
                    // already++;
                    curr--;
                }
                else
                {
                    curr++;
                }
                curr += already_c[n-j-1];
                if (curr > max)
                {
                    max = curr;
                }
            }
            max = max + already[i];
            if (max > ans)
            {
                ans = max;
            }
        }
        cout << ans << endl;
    }
    return 0;
}