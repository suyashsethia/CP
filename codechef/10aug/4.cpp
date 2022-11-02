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

void power(int k, int &count)
{
    int g = pow(2, 0);
    int j = 0;
    while (g < k)
    {
        j++;
        g = pow(2, j);
    }
    if (g == k)
    {
        count++;
        return;
    }
    g = g / 2;
    power(g, count);
    power(k - g, count);
}
// int ans(int n)
// {
//     int x, y;
//     x = power(n);
//     y = n - x;
// }
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        int count = 0;
        power(n, count);
        // while (x != 2 || y != 2 || x != 0 || y != 0)
        // {
        // }
        cout << count - 1 << endl;
    }
    return 0;
}