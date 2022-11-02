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
        string a, b;
        cin >> a >> b;
        string ans;
        vi a1(4, 0), b1(4, 0);
        if (a == b)
        {
            ans = "=";
        }
        else
        {
            FOR(i, 0, a.length())
            {
                if (a[i] == 'M')
                {
                    a1[0]++;
                }
                else if (a[i] == 'S')
                {
                    a1[1]++;
                }
                else if (a[i] == 'L')
                {
                    a1[2]++;
                }
                else if (a[i] == 'X')
                {
                    a1[3]++;
                }
            }
            FOR(i, 0, b.length())
            {
                if (b[i] == 'M')
                {
                    b1[0]++;
                }
                else if (b[i] == 'S')
                {
                    b1[1]++;
                }
                else if (b[i] == 'L')
                {
                    b1[2]++;
                }
                else if (b[i] == 'X')
                {
                    b1[3]++;
                }
            }
            if (a1[0] == 1)
            {
                if (b1[2] == 1)
                {
                    ans = '<';
                }
                else
                {
                    ans = '>';
                }
            }
            else if (b1[0] == 1)
            {
                if (a1[2] == 1)
                {
                    ans = '>';
                }
                else
                {
                    ans = '<';
                }
            }
            else if (a1[1] ==1)
            {
                if (b1[2] ==1 )
                {
                    ans = '<';
                }
                else if (a1[3] < b1[3])
                {
                    ans = '>';
                }
                else
                {
                    ans = '<';
                }
            }
            else if (a1[2] != 0)
            {
                if (b1[2] == 0)
                {
                    ans = '>';
                }
                else if (a1[3] > b1[3])
                {
                    ans = '>';
                }
                else
                {
                    ans = '<';
                }
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}