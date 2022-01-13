/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >> T;
    for(int n, m; T-- > 0 && cin >> n >> m; ) 
    {
        string s;
        cin >> s;
        vector<int> a(n + 1), b(n + 1);
        for(int i = n, x = 1; i-- > 0; ) 
        {
            a[i] = ((LL)x * (s[i] - '0') + a[i + 1]) % m;
            x = x * 10LL % m;
        }
        for(int i = n - 1, x = 1; i-- > 0; ) 
        {
            b[i] = ((LL)x * (s[i] - '0') + b[i + 1]) % m;
            x = x * 10LL % m;
        }
        int ans = a[0];
        for(int i = 0; i < n; ++i) 
        {
            int x = ((b[0] - b[i] + a[i + 1]) % m + m) % m;
            ans = max(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}
