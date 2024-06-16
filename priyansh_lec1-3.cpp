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
    // cin>>t;
    while (t--)
    {
        int n;
        int x;
        cin >> n >> x;
        vi h(n);
        FOR(i, 0, n)
        {
            cin >> h[i];
        }
        vi s(n);
        vector<pair<pair<int, int>, float>> aaa;
        FOR(i, 0, n)
        {
            cin >> s[i];
            aaa.push_back({{s[i], h[i]}, float(s[i]) / float(h[i])});
        }
        sort(aaa.begin(), aaa.end(),
             [](const auto &a, const auto &b)
             {
                 if (a.second == b.second)
                 {
                     return a.first.first < b.first.first;
                 }
                 return a.second > b.second; // Sort based on second element (ratio)
             });

        int ans = 0;
        FOR(i, 0, n)
        {
            if (x - aaa[i].first.second >= 0)
            {
                ans += aaa[i].first.first;
                x = x - aaa[i].first.second;
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}