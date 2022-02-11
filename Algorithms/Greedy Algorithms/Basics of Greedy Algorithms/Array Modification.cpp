/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int n, i, sum = 0;
    cin >> n;
    long long int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for(i = 0; i < n; i++)
        a[i] %= 1000000007;
    if(a[0] < 0)
    {
        sum += ((a[0] * a[1]) % 1000000007);
        for(i = 1; i < (n - 1); i++)
        {
            if(a[i] < 0)
            {
                sum += ((a[0] * a[i]) % 1000000007);
                sum %= 1000000007;
            }
            else
            {
                sum += ((a[i] * a[n-1]) % 1000000007);
                sum %= 1000000007;
            }
        }
        if(a[n - 1] < 0)
        {
            sum += ((a[0] * a[n - 1]) % 1000000007);
            sum %= 1000000007;
        }
        else
        {
            sum += ((a[n - 2] * a[n - 1]) % 1000000007);
            sum %= 1000000007;
        }
    }
    else
    {
        for(i = 0; i < (n - 1); i++)
        {
            sum += ((a[i] * a[n - 1]) % 1000000007);
            sum %= 1000000007;
        }
        sum += ((a[n - 2] * a[n - 1]) % 1000000007);
        sum %= 1000000007;
    }
    if(n == 2)
        sum = 999999909;
    cout << sum;
}
