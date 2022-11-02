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
string change(string &c, int index, int k)
{
    FOR(i, index, k + index)
    {
        if (c[i] == '0')
        {
            c[i] = '1';
        }
        else
        {
            c[i] = '0';
        }
    }
    return c;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string c, c2, temp, ideal;
        cin >> c;
        FOR(i, 0, n)
        {
            ideal += '0';
        }
        FOR(i, 0, (n - k) + 1)
        {
            if (c == ideal)
            {
                break;
            }
            temp = c;
            c = change(c, i, k);
            if (temp < c)
            {
                c = temp;
            }
            // ideal += '0';
        }
        cout << ideal << endl;
    }
    return 0;
}