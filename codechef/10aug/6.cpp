#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i >= a; i--)
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
// int prefix(int i)
// {
//     int sum = 0;
//     FOR(j, 0, i + 1)
//     {
//         sum += b[j] - '0';
//     }
//     return sum;
// }
// int sufix(int i)
// {
//     int sum = 0;
//     FOR(j, i + 1, b.size())
//     {
//         sum += b[j] - '0';
//     }
//     return sum;
// }
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    cin >> t;
    while (t--)
    {
        string a = "", b = "";
        int n, m;
        cin >> n >> m;
        cin >> a;
        int f = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            // string p = a[i];
            b += a[i];
        }
        int ans = 0;
        int prefix[n * m + 1];
        int suffix[n * m + 1];
        int sum = 0;
        int sum2 = 0;
        FOR(i, 0, n)
        {
            // cout << "a[i]== " << a[i] << endl;
            sum += a[i] - '0';
            sum2 += b[i] - '0';

            // cout << "sum= " << sum << endl;
            prefix[i] = sum;
            suffix[i] = sum2;
        }
        int j = 3;
        int k = 3;
        FOR(i, 0, m)
        {
            // b = b.append(a);

            prefix[j++] = prefix[n - 1] * (i + 1) + prefix[0];
            prefix[j++] = prefix[n - 1] * (i + 1) + prefix[1];
            prefix[j++] = prefix[n - 1] * (i + 1) + prefix[2];
            suffix[k++] = suffix[n - 1] * (i + 1) + suffix[0];
            suffix[k++] = suffix[n - 1] * (i + 1) + suffix[1];
            suffix[k++] = suffix[n - 1] * (i + 1) + suffix[2];
        }
        // cout << b << endl;
        FOR(j, 0, n * m)
        {
            cout << prefix[j] << " ";
            // cout << suffix[j] << " ";

            // sum += b[j] - '0';
            // prefix[j] = sum;
        }
          FOR(j, 0, n * m)
        {
            // cout << prefix[j] << " ";
            cout << suffix[j] << " ";

            // sum += b[j] - '0';
            // prefix[j] = sum;
        }
        // sum = 0;
        // for (int j = n * m - 1; j >= 0; j--)
        // {
        //     sum += b[j] - '0';
        //     suffix[j] = sum;
        // }
        // suffix[n * m] = 0;

        // // return sum;

        // FOR(i, 0, n * m)
        // {
        //     if (prefix[i] == suffix[i + 1])
        //     {
        //         ans++;
        //     }
        //     // cout << prefix[i] << " " << suffix[i + 1] << endl;
        // }
        // cout << ans << endl;
    }
    return 0;
}