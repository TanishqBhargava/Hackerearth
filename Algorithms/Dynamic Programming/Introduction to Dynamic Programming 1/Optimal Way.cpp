/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int a[25], n, k;
long long dp[(1 << 20) + 5];
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for(int i = 0; i < (1 << n); i++)
    {
        int round = n - __builtin_popcount(i);
        if(round & 1) 
            continue;
        round /= 2;
        if(round > k) 
            continue;
        int tmp1 = i;
        while(tmp1)
        {
            int x = __builtin_ctz(tmp1);
            tmp1 ^= (1 << x);
            int tmp2 = tmp1;
            while(tmp2)
            {
                int y = __builtin_ctz(tmp2);
                tmp2 ^= (1 << y);
                dp[i] = max(dp[i], dp[i ^ (1 << x) ^ (1 << y)] + (round + 1ll) * (a[x] & a[y]));
            }
        }
    }
    cout << dp[(1 << n) - 1] << endl;
}
