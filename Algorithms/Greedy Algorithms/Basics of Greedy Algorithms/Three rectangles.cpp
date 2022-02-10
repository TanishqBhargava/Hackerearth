/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int solve(int h, int w) 
{
    int ans = INT_MAX;
    for (auto x : {(long long) w * h / (3 * h / 2), (long long) w * h / (3 * h / 2) + 1})
        ans = min<long long>(ans, max({abs(x * (long long)(h / 2) - (long long)(w - x) * h), x * (long long)((h + 1) / 2) - (long long)(w - x) * h, h % 2 * x}));
    return ans;
}
 
int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) 
	{
        int h, w;
        cin >> h >> w;
        cout << min({h % 3 == 0 || w % 3 == 0 ? 0 : min(h, w), solve(h, w), solve(w, h)}) << endl;
    }
}
