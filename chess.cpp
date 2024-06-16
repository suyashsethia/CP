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
int mod(int a)
{
    if (a >= 0)
    {
        return a;
    }
    return -a;
}
int horsee(int horseX, int horseY, int spaceX, int spaceY)
{
    if ((mod(horseX - spaceX) == 1) && (mod(horseY - spaceY) == 2))
    {
        return 1;
    }
    else if ((mod(horseX - spaceX) == 2) && (mod(horseY - spaceY) == 1))
    {
        return 1;
    }
    else if ((horseX == spaceX) && (horseY == spaceY))
    {
        return 1;
    }
    return 0;
}
int rooke(int horseX, int horseY, int spaceX, int spaceY)
{
    if (horseX == spaceX || horseY == spaceY)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int horseX, horseY;
        int rookX, rookY;
        string horse, rook;
        cin >> rook >> horse;
        int ans = 0;
        rookX = int(rook[0] - 'a');
        rookY = int(rook[1] - '1');
        horseX = int(horse[0] - 'a');
        horseY = int(horse[1] - '1');
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((horsee(horseX, horseY, i, j) == 0) && (rooke(rookX, rookY, i, j) == 0) && (horsee(rookX, rookY, i, j) == 0))
                {
                    ans++;
                }
            }
        }
        cout << ans;
        nl;
    }
    return 0;
}