#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (long long i = a; i < n; i++)
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

    long long t = 1;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        // if (k == 0)
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }
        bool flag = true;

        if (k % 4 == 2)
        {
            cout << "YES" << endl;

            FOR(i, 1, n)
            {
                if (flag)
                {
                    cout << i + 1 << " " << i << endl;
                    i++;
                    flag = false;
                }
                else
                {
                    cout << i << " " << i + 1 << endl;
                    i++;
                    flag = true;
                }
            }
        }
        else if (k % 4 == 0)
        {
            cout << "NO" << endl;
        }

        else if (k % 2 == 1)
        {

            cout << "YES" << endl;
            FOR(i, 1, n)
            {
                cout << i << " " << i + 1 << endl;
                i++;
            }
        }
    }
    return 0;
}