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
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    if (a.second == 0 && b.second == 0)
    {
        return a.first > b.F;
    }
    return (a.second > b.second);
}
int main()
{
    JALDI jaldi;

    int t = 1;
    //   cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        // vi a(n), b(n);
        pair<int, int> p;
        vector<pair<int, int>> a(n);
        FOR(i, 0, n)
        {
            // cin >> a[i] >> b[i];
            cin >> a[i].first >> a[i].second;
        }
        int card = 1, point = 0;
        sort(a.begin(), a.end(), sortbysec);
        // while (card > 0)
        // {
        // FOR(i, 0, n)
        // {
        //     cout << a[i].F << " " << a[i].S << endl;
        // }
        FOR(i, 0, n)
        {
            card--;
            card += a[i].second;
            point += a[i].first;
            if (card == 0)
            {
                break;
            }
        }
        cout << point << endl; // }
    }
    return 0;
}