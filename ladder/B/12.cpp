#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c_A = 0, c_I = 0, c_F = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            c_A++;
        }
        else if (s[i] == 'I')
        {
            c_I++;
        }
        else
        {
            c_F++;
        }
    }
    if (c_I == 0)
    {
        cout << c_A << endl;
    }
    else if (c_I == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0;
    }
}