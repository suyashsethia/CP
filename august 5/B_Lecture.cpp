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

    int n, m;
    cin >> n >> m;
    string first[m];
    string second[m];
    string a;
    string ans[n];


    FOR(i, 0, m)
    {
        cin >> first[i] >> second[i];
    }
    FOR(i, 0, n)
    {
        cin >> a;
        FOR(j, 0, m)
        {
            if (a == first[j])
            {
                if (first[j].length() > second[j].length())
                {
                    ans[i] = second[j];
                }
                else
                {
                    ans[i] = first[j];
                }
                break;
            }
                else if (a == second[j])
                {
                    if (first[j].length() > second[j].length())
                    {
                        ans[i] = second[j];
                    }
                    else
                    {
                        ans[i] = first[j];
                    }
                    break;
                }
            }
            cout << ans[i] << " ";
        }

        return 0;
    }