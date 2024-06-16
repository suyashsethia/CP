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
#include <bits/stdc++.h>
int frogJump(int n, vector<int> &heights)
{
    if (n <= 0)
    {
        return 0;
    }
    int ans = 0;
    int position = 1;
    while (1)
    {
        if (position == n)
        {
            break;
        }
        if (position == n - 1)
        {
            ans += abs(heights[position] - heights[position + 1]);
            position += 1;
        }
        else if (abs(heights[position] - heights[position + 1]) <
                 abs(heights[position] - heights[position + 2]))
        {
            ans += abs(heights[position] - heights[position + 1]);
            position += 1;
        }
        else
        {
            ans += abs(heights[position] - heights[position + 2]);
            position += 2;
        }
    }
    return ans;
}
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
        vi k(n);
        FOR(i, 0, n)
        {
            cin >> k[i];
        }
        int ans = frogJump(n, k);
        cout << ans << endl ; 
    }
    return 0;
}