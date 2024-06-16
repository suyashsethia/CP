

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &dp, vector<int> &h, int n, int k)
    {
        if (n <= 0)
        {
            return 0;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        int l = INT_MAX;
        for (int i = 1; i < k + 1; i++)
        {
            if (n - i < 0)
            {
                break;
            }
            l = min(abs(h[n] - h[n - i]) + solve(dp, h, n - i, k), l);
        }
        dp[n] = l;
        return dp[n];
    }
    int minimizeCost(vector<int> &height, int n, int k)
    {
        // Code here
        vector<int> dp(n + 1, 0);

        int ans = solve(dp, height, n - 1, k);

        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> height(n);
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        Solution obj;
        cout << obj.minimizeCost(height, n, k) << endl;
    }
    return 0;
}