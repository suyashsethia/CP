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
// char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
// ll m, n, q;

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
        string c;
        cin >> c;
        int cc = 1;
        stack<char> s;
        int countl = 0, countr = 0;

        FOR(i, 0, 2 * n)
        {
            if (c[i] == ')')
            {
                countr++;
                if (countr > countl)
                {
                    cc--;
                }
                if (s.size() == 0)
                {
                    if (cc >= 1)
                    {
                        cc++;
                    }
                    cc--;
                    s.push(c[i]);

                    continue;
                }
                if (s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    s.push(c[i]);
                }
            }
            else if (c[i] == '(')
            {
                if (s.size() == 0)
                {
                    countl++;
                    s.push(c[i]);
                    continue;
                }
                // if (countl < countr)
                // {
                //     s.push(c[i]);
                // }
                else
                {
                    s.push(c[i]);

                    cc++;
                }
                countl++;
            }
            // if (s.size() == 0)
            // {
            //     s.push(c[i]);
            //     if (c[i] == '(')
            //     {
            //         countl++;
            //     }
            //     else
            //     {
            //         countr++;
            //     }
            //     continue;
            // }
            // if (c[i] == '(')
            // {
            //     countl++;
            //     s.push(c[i]);
            //     cc++;
            //     if (countr > countl)
            //     {
            //         cc--;
            //     }
            //     continue;
            // }
            // if (s.top() == '(' && c[i] == ')')
            // {
            //     countr++;
            //     s.pop();
            // }
            // else if (c[i] == ')')
            // {
            //     countr++;
            //     s.push(c[i]);
            //     if (countr > countl)
            //     {
            //         cc--;
            //     }
            // }
        }
        cout << cc + s.size() << endl;
    }
    return 0;
}