/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 14, mod = 1e9 + 7;
int n, po[maxn] = {1};

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    for(int i = 1; i < maxn; i++)
        po[i] = po[i - 1] * 2 % mod;
    cin >> n;
    map<int, int> cnt;
    for(int i = 0; i < n; i++)
	{
        int x;
        cin >> x;
        cnt[x]++;
	}
    int ans = 0;
    for(auto [x, y] : cnt)
        if(x)
            (ans += po[y - 1]) %= mod;
        else
            (ans += po[y] - 1) %= mod;
    cout << ans << endl;
}
