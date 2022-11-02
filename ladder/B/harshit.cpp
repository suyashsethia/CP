#include <bits/stdc++.h>
using namespace std;

/*

5
10 12 13 15 10 ?

ans = 1
ans_indx = 2
diff = 1


*/

int mod(int a)
{
    if (a > 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

int main()
{
    // cout << mod(-5) << "\n";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff;
    int ans = 999999;
    int ans_indx;
    for (int i = 0; i < n - 1; i++)
    {
        diff = mod(arr[i] - arr[i + 1]);
        if (ans > diff)
        {
            ans = diff;
            ans_indx = i + 1;
        }
    }
    diff = mod(arr[0] - arr[n - 1]);
    if (ans > diff)
    {
        ans = diff;
        ans_indx = 1;
        cout << 1 << " " << n << endl;
    }
    else
    {
        cout << ans_indx << " " << ans_indx + 1 << endl;
    }
    return 0;
}