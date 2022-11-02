#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count_4 = 0, count_7 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '4')
        {
            count_4++;
        }
        else if (a[i] == '7')
        {
            count_7++;
        }
    }
    if (count_4 + count_7 == 0)
    {
        cout << -1 << endl;
    }
    else if (count_4 < count_7)
    {
        cout << 7 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0 ;
}