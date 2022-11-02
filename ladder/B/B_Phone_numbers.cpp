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
    //   cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        char digits[n];
        FOR(i, 0, n)
        {
            cin >> digits[i];
        }
        int n_ = n;

        int r3 = n % 3;
        if (r3 == 0 || r3 == 2)
        {
            int count = 3;
            FOR(i, 0, n)
            {
                cout << digits[i];
                count--;
                if (count == 0 && i != n - 1)
                {
                    cout << "-";
                    count = 3;
                }
            }
        }
        else if (r3 == 1)
        {
            int count = 3;
            if (n_ <= 4)
            {
                count = 2;
            }
            FOR(i, 0, n)
            {

                cout << digits[i];
                count--;
                n_--;
                if (count == 0 && i != n - 1)
                {
                    cout << "-";
                    count = 3;

                    if (n_ <= 4)
                    {
                        count = 2;
                    }
                }
            }
        }
    }
    return 0;
}