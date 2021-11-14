/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long t; 
	  cin >> t; 
	  while(t--)
	  {
        long long  n, a = 0, b = 0, c = 0, d = 0, x = 0, y = 0, p = 0, q = 0;
        cin >> n;
        while(n--)
		    {
         	  cin >> x >> y;
         	  if(x >= 0)
         		    a = max(a, x);
         	  else
         		    c = min(c, x);
         	  if(y >= 0)
         		    b = max(b, y);
         	  else
         		    d = min(d, y);
        }
        p = a - c;
        q = b - d;
        long long k = max(p, q);
        cout << k * k << endl;
    } 
}
