#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first > b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> list(n + 1);
    for (int i = 0; i < n; i++)
    {
        list[i].second = i + 1;
        cin >> list[i].first;
    }
    sort(list.begin(), list.end(), cmp);
    int g = list[k - 1].first;
    cout << g;
    cout << "\n";
    for (int i = 0; i < k; i++)
    {
        cout << list[i].second << " ";
    }
    return 0;
}