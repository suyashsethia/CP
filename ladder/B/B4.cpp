#include <bits/stdc++.h>
using namespace std;
int digit_check(int n)
{
    int digit = 1;
    while (n > 0)
    {
        n = n / 10;
        if (n == 0)
        {
            break;
        }
        digit++;
    }
    return digit;
}
int main()
{

    string c;
    cin >> c;
    int sum = 0;
    if (c.size()==1)
    {
        cout << 0 << endl;
        return 0;
    }
    int digits = 100000000;

    for (int i = 0; i < c.size(); i++)
        sum += (int(c[i]) - '0');

    digits = digit_check(sum);
    if (digits == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    digits = 1;
    int sum_new = 0;
    while (sum/10)
    {
        // int i = 1 ;
        while (sum > 0)
        {
            sum_new += sum % int(pow(10, 1));
            sum = sum / 10;
        }
        digits++;
        // if (digit_check(sum_new) == 1)
        // {
        //     cout << digits << endl;
        //     return 0;
        // }
        // digits = 0;
        sum = sum_new;
        sum_new = 0;
    }
    cout << digits << endl;

}