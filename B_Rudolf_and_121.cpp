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
        vll a(n);
        int all_same = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            int k = a[0];
            if (a[i] == k)
            {
                all_same++;
            }
        }
        int flag = 0;
        int sum = 0;
        int j = n - 2;
        for (ll i = 1; i < n; i++)
        {
            
        }
        // if (sum == 0)
        // {
        //     flag = 1;
        //     if (n % 2 == 0)
        //     {
        //         for (int i = 1; i < n / 2; i++)
        //         {
        //             if (a[i] < a[i - 1])
        //             {
        //                 flag = 0;
        //                 break;
        //             }
        //         }
        //         for (int i = n / 2 + 1; i < n; i++)
        //         {
        //             if (a[i] > a[i - 1])
        //             {
        //                 flag = 0;
        //                 break;
        //             }
        //         }
        //     }
        //     if (n % 2 == 1)
        //     {
        //         for (int i = 1; i < n / 2; i++)
        //         {
        //             if (a[i] < a[i - 1])
        //             {
        //                 flag = 0;
        //                 break;
        //             }
        //         }
        //         for (int i = n / 2 + 1; i < n; i++)
        //         {
        //             if (a[i] > a[i - 1])
        //             {
        //                 flag = 0;
        //                 break;
        //             }
        //         }
        //     }
        // }
        if (all_same == n)
        {
            flag = 0;
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        nl;
    }
    return 0;
}