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

int binarySearch1(vi &A, int key, int l, int r)
{
    int mid = (l + r) / 2;
    int succesor = -1;
    if (l > r)
        return succesor;

    if (key == A[mid])
        return mid;

    if (key < A[mid])
    {
        // go left [l, mid-1]
        return binarySearch1(A, key, l, mid - 1);
    }
    else
    {
        succesor = mid;
        return binarySearch1(A, key, mid + 1, r);
    }
}
int binarySearch2(vi &A, int key, int l, int r)
{
    int mid = (l + r) / 2;
    int pre = -1;
    if (l > r)
        return pre;

    if (key > A[mid])
        return mid;

    if (key < A[mid])
    {
        pre = mid;
        // go left [l, mid-1]
        return binarySearch2(A, key, l, mid - 1);
    }
    else
    {
        // go right [mid+1, r]
        return binarySearch2(A, key, mid + 1, r);
    }
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
        int n, l, r;
        cin >> n >> l >> r;
        vi a(n);
        FOR(i, 0, n)
        {
            cin >> a[i];
        }
        sort(ALL(a));
        FOR(i, 0, n)
        {
            int k = binarySearch1(a, l - a[i], 0, n - 1);
            int o = binarySearch2(a, r - a[i], 0, n - 1);
            cout << k << " " << o << endl;
        }
    }
    return 0;
}