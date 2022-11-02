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
        int p1 = 0, p2 = 0, p3 = 0;
        int n;
        cin >> n;
        map<string, int> count;
        string a[3][n];
        FOR(i, 0, 3)
        {
            FOR(j, 0, n)
            {
                cin >> a[i][j];
                count[a[i][j]]++;
            }
        }
        FOR(i, 0, 3)
        {
            FOR(j, 0, n)
            {
                if (i == 0)
                {
                    if (count[a[i][j]] == 1)
                    {
                        p1 += 3;
                    }
                    else if (count[a[i][j]] == 2)
                    {
                        p1 += 1;
                    }
                }
                else if (i == 1)
                {
                    if (count[a[i][j]] == 1)
                    {
                        p2 += 3;
                    }
                    else if (count[a[i][j]] == 2)
                    {
                        p2 += 1;
                    }
                }
                else if (i == 2)
                {
                    if (count[a[i][j]] == 1)
                    {
                        p3 += 3;
                    }
                    else if (count[a[i][j]] == 2)
                    {
                        p3 += 1;
                    }
                }
            }
        }
        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0;
}