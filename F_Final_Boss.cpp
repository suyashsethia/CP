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
        int h, n;
        cin >> h >> n;
        vector<int> a(n, 0);
        vector<int> c(n, 0);
        vector<int> use(n, 0);

        FOR(i, 0, n)
        {
            int g;
            cin >> g;
            a[i] = g;
        }
        FOR(i, 0, n)
        {
            int g;
            cin >> g;
            c[i] = g;
        }
        int turn = 0;
        while (h > 0)
        {
            for(int i =0 ;i<n ; i++)
            {
                if(use[i]<0)
                {
                    h=h-a[i] ; 
                    use[i] = c[i] ; 
                }
                use[i]-- ;
            }
            turn ++ ;         
                
        }
        cout<<turn-1 <<endl;
    }
    return 0;
}