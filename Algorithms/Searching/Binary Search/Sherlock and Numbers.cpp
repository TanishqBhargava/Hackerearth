/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	  int t, n, k, p;
    cin >> t;
    while(t--) 
	  {
        cin >> n >> k >> p;
        for (int i = 1; i <= k; i++) 
		    {
            int x;
            cin >> x;
            if(x <= p) 
				        p++;
        }
        if(p > n) 
			      cout << -1 << endl; 
		    else 
			      cout << p << endl;
    }
}
