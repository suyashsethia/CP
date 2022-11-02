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
        int n;
        cin >> n;
        string ans = "";
        string code;
        cin >> code;
        for (int i = n - 1; i >= 0; i--)
        {
            if (code[i] == '0')
            {
                int count = 0;
                string temp;
                for (int j = i - 1; j >= 0; j--)
                {
                    temp += code[j];
                    count++;
                    if (count == 2)
                    {
                        break;
                    }
                }
                ans += 'a' + int(temp[0]) - '1' + (int(temp[1]) - '0') * 10;
                i--;
                i--;
            }

            else
            {
                ans += 'a' + (int(code[i]) - '1');
            }
        }
        reverse(ALL(ans));
        cout << ans;
        nl;
    }
    return 0;
}