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
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s_h, s_m;
        cin >> s_h >> s_m;
        int ans_h, ans_m;
        int final_h = 100, final_m = 100;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;

            if (h > s_h)
            {
                if (m >= s_m)
                {
                    ans_h = h - s_h;
                    ans_m = m - s_m;
                }
                else
                {
                    ans_h = h - s_h - 1;
                    ans_m = 60 - (s_m - m);
                }
            }
            else if (h == s_h)
            {
                if (m >= s_m)
                {
                    ans_h = h - s_h;
                    ans_m = m - s_m;
                }
                else
                {
                    ans_h = 23;
                    ans_m = 60 - (s_m - m);
                }
            }
            else
            {
                if (m >= s_m)
                {
                    ans_h = 24 - (s_h - h);
                    ans_m = m - s_m;
                }
                else
                {
                    ans_h = 24 - (s_h - h) - 1;
                    ans_m = 60 - (s_m - m);
                }
            }
            if (ans_h < final_h)
            {
                final_h = ans_h;
                final_m = ans_m;
            }
            else if (ans_h == final_h)
            {
                if (ans_m < final_m)
                {
                    final_m = ans_m;
                }
            }
        }
        cout << final_h << " " << final_m << endl;
    }
    return 0;
}