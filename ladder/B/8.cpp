#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926536

int main()
{
    int n;
    cin >> n;
    double radii[n];
    int k = n;
    for (int i = 0; i < n; i++)
    {
        // double r;
        cin >> radii[i];
        // radii.push_back(r);
    }
    sort(radii, radii + n);
    reverse(radii, radii + n);
    double ans;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            ans -= radii[i] * radii[i] * PI;
        }
        else
        {
            ans += radii[i] * radii[i] * PI;
        }
    }
    cout << setprecision(7) << fixed<<ans << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     double area=0, sum=0, pi=3.1415926536;
//     int n, a[1000];
//     cin >>n;
//     for(int i=0; i<n; i++) cin >> a[i];
//     sort(a, a+n);
//     reverse(a, a+n);
//     for(int i=0; i<n; i++){
//         area = a[i]*a[i]*pi;
//         if(i%2==0) sum+=area;
//         else sum-=area;
//     }
//     cout << setprecision(5) << fixed << sum;

//     return 0;
// }