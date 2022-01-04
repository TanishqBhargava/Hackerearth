/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
long long POW (long long x, long long y)
{
    long long Res = 1;
    for( ; y; y /= 2, x = x * x)
        if (y % 2)
            Res *= x;
    return Res;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<pair<long long, long long>> ans;
    long long t, v = 0, x = 1;
    for(int i = 1; i <= 44; i++)
    {
        v += POW(2, i) * i;
        ans.push_back({v + x, x}); 
        x++;
        ans.push_back({v + x,x}); 
        x++;
    }
    pair<long long, long long> f;
    cin >> t;
    while(t--)
    {
        cin >> x;
        pair<long long, long long> num = {x, 0};
        f = *lower_bound(ans.begin(), ans.end(), num);
        cout << f.second << endl;
    }
    return 0;
}
