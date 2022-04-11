/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, k, a[128], f[128][30300], seq;
 
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T-- > 0 && cin >> n >> k) 
    {
        for(int i = 1; i <= n; ++i) 
            cin >> a[i];
        f[0][10100] = ++seq;
        int lo = 10100, hi = 10100;
        for(int i = 1; i <= n; ++i) 
        {
            for(int j = lo; j <= hi; ++j) 
            {
                if(f[i - 1][j] == seq) 
                {
                    f[i][j + a[i]] = seq;
                    f[i][j - a[i]] = seq;
                    f[i][j + a[i] + i] = seq;
                    f[i][j + a[i] - i] = seq;
                }
            }
            lo += min(-a[i], a[i] - i);
            hi += a[i] + i;
        }
        cout << (f[n][10100 + k] == seq ? "YES" : "NO") << endl;
    }
}
