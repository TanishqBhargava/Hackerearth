/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[500014];

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        ll ans = 0;
        for(int i = 0; i < 25; ++i) 
        {
            int l = 0;
            while(l < n && (a[l] >> i & 1))
                ++l;
            int r = n;
            while(r > l && (a[r - 1] >> i & 1))
                --r;
            ans += (l == n ? n * ll(n + 1) / 2 - 1 : (l + 1) * ll(n - r + 1) - 1) * (1 << i);
        }
        cout << ans << endl;
    }
}
