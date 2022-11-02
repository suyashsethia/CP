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
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int even = 2;
        int odd = 1;
        // if (n == 1)
        // {
        //     cout << 1 << ;
        // }
        FOR(i, 0, n)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0)
                {

                    cout << even << " ";
                    even += 2;
                }
                else
                {

                    cout << odd << " ";
                    odd += 2;
                }
            }
            else
            {
                if (i % 2 == 1)
                {

                    cout << even << " ";
                    even += 2;
                }
                else
                {

                    cout << odd << " ";
                    odd += 2;
                }
            }
        }
        // else if (n % 2 == 1)
        // {
        //     FOR(i, 0, n)
        //     {
        //         if ()
        //             cout << even << " ";
        //         cout << odd << " ";
        //         even += 2;
        //         odd += 2;
        //     }
        // }
        cout << endl;
    }
    return 0;
}