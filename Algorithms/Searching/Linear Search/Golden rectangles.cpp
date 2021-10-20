/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long t, ans = 0; 
    cin >> t; 
    while(t--)
    {
        long long w, h;
        cin >> w >> h;
        if(h > w) 
            swap(h, w);
        ans += ((w * 10) / h == 16 || w * 10 == 17 * h);
    }
    cout << ans;
}
