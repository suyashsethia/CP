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
        vi s(n);
        int time = 0;
        FOR(i, 0, n - 1)
        {
            cin >> s[i];
            time += s[i];
        }
        s[n - 1] = 0;
        int f = 0, j = 0;
        int apos = 0;
        int bpos = 0, at = 0, bt = 0, nsposa = s[f], nsposb = s[j];
        while (nsposb != time)
        {
            if (f < n - 1)
            {
                at++;
            }
            bt++;
            if (nsposb < nsposa)
            {
                bpos++;
            }
            if (at == nsposa)
            {
                if (f < n - 1)
                {
                    nsposa += s[++f];
                }
            }
            if (bpos == nsposb)
            {
                // if (nsposb == time)
                // {
                //     bt += s[n - 2];
                //     break;
                // }
                nsposb += s[++j];
            }
        }
        bt = bt + s[n - 2] + nsposa - at;
        cout << bt << endl;
    }
    return 0;
}