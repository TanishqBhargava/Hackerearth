/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n;
	bool pr[200000];
    cin >> t;
    while(t--) 
	{
        cin >> n;
        int ans = 0;
        for(int i = 2; i <= n; ++i)
            if(!pr[i]) 
			{
                ++ans;
                for(int j = 2 * i; j <= n; j += i) 
                    pr[j] = true;
            }
        cout << ans << endl;
    }
}
