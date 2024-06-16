#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string k;
        string ans;
        cin >> k;
        if (k.length() > 10)
        {

            ans = k[0] + to_string(k.length()-2) + k[k.length() - 1] ;
        }
        else
        {
            ans = k;
        }
        cout << ans << endl;
    }
}