#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    // int a[n];
    int a, b, min_b = 100000, max_a = -100000;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if (a > max_a)
        {
            max_a = a;
        }
        if (b < min_b)
        {
            min_b = b;
        }
    }
    if (min_b<max_a)
    {
        cout<<-1<<endl ;
    }
    else if (x >=max_a && x<=min_b)
    {
        cout<<0<<endl ;
    }
    else if (x<max_a)
    {
        cout<<max_a-x<<endl ;
    }
    else if (x>min_b)
    {
        cout<<x-min_b<<endl ;
    }
return 0 ;
}