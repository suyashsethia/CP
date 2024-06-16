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
string reverse_srting(string &s, int n)
{
    string k = s;
    for (int i = 0; i < n/2; i++)
    {
        swap(k[i], k[n - i - 1]);
    }
    return k;
}
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
        string s;
        string ans;
        cin >> n;
        cin >> s;
        // cout << reverse_srting(s ,s.length()) << endl;
        if (s > reverse_srting(s, s.length()))
        {
            ans = reverse_srting(s, s.length()) + s;
        }
        else if (s <= reverse_srting(s, s.length()))
        {
            ans = s ;
        }
        
        cout << ans << endl;
    }
    return 0;
}