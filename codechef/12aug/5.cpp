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

int main()
{

    JALDI jaldi;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = 1;
        int b = 1;
        bool flag = false, flagg = false;
        for (a = 1; a < 10000; a++)
        {
            for (b = 1; b < 10000; b++)
            {
                if (x == 2 * a + 2 * b + a * b)
                {
                    flag = true;
                    flagg = true;
                    break;
                }
                else if (x < 2 * a + 2 * b + a * b)
                {
                    break;
                }
            }
            if (flagg)
            {
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}