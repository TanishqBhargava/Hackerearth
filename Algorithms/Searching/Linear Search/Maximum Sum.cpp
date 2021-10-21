/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0, mx = -2e9;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++) 
    {
        int x;
        cin >> x;
        if(x >= 0) 
            sum += 1LL * x, cnt++;
        mx = max(mx, x);
    }
    if(cnt) 
        cout << sum << " " << cnt << endl;
    else 
        cout << mx << " " << 1 << endl;
  return 0;
}
