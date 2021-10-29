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
	  long long t, a, b, n;
	  cin >> t;
	  while (t--) 
	  {
		    cin >> a >> b >> n;
		    long long p = __gcd(a,b), L, R, M, ans;
		    p = (a * b) / p; L = a; R = a * n;
		    while (L <= R) 
		    {
			      M = (L + R) / 2;
			      long long val = M / a + M / b - M / p;
			      if(val == n) 
			      {
                ans = max((M / a) * a, (M / b) * b);
				        cout << ans << endl;
				        break;
			      }
			      else if(val < n) 
				        L = ++M;
			      else 
				        R = --M;
		    }
	  }
    return 0;
}
