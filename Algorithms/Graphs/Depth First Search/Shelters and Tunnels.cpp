/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long n, d[100123];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n, m, mx = 0, ans = 0;
    cin >> n;
    for(long long i = 1; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        d[x]++;
        d[y]++;
    }
    for(long long i = 1; i <= n; i++)
        mx = max(mx, d[i]);
    for(long long i = 1; i <= n; i++)
    {
        if(mx == d[i])
            ans++;
    }
    cout << ans << endl;
    for(long long i = 1; i <= n; i++)
    {
        if(d[i] == mx)
            cout << i << ' ';
    }
}
