/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, n_, d, i, sec = 1, buf = 0;
    cin >> n >> d;
    int a[n + 1] = {0};
	for(i = 1; i <= n; i++) 
        cin >> a[i];
    for(n_ = n; n_ > -1; n_--)
            if(a[n_]) 
            {
                n_++; 
                break;
            }
    for(i = 1; i < n_; i++) 
    {
        buf += a[i];
        if(buf - d >= 0) 
            buf -= d;
        else    
            sec ++;
    }
    cout << sec << endl;
    return 0;
}
