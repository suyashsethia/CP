#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i >= a; i--)
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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        FOR(i, 0, n)
        cin >> a[i];

        int count = 0, max = 0;
        bool flag = true;
        FOR(i, 0, n)
        {
            count = 0;
            for (int j = i; j < n - 1; j++)
            {
                if (a[j + 1] <= a[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (true)
            {
                count++;
                flag = false;
            }
            for (int j = i; j > 0; j--)
            {
                if (a[j - 1] <= a[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count > max)
            {
                max = count;
            }
        }
        cout << max << endl;
    }
    return 0;
}