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
void printarray(vector<int> a)
{
    FOR(i, 0, a.size())
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    JALDI jaldi;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << endl;
        vector<int> a;
        FOR(i, 0, n)
        {
            a.push_back(i + 1);
        }
        printarray(a);
        int j = n - 1;
        int count = 0;

        FOR(i, 0, n - 1)
        {
            swap(a[i], a[j]);
            printarray(a);
        }
    }
    return 0;
}