/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

long long POW_M (long long x , long long y)
{
    long long Res = 1 ;
    for ( ; y ; y /= 2 , x = x * x % 1000000007)
        if (y % 2)
            Res = Res * x % 1000000007;
    return Res % 1000000007;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t, n, ans, Min, Max, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ans = POW_M(2, n);
        ans = (ans + 1000000006) % 1000000007;
        cout << ans << endl;
    }
    return 0;
}
