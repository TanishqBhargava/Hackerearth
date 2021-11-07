/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
bool flg[100007];
int a[100007], mexl[100007], mexr[100007];
 
int main () 
{
	  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	  int tc; 
	  cin >> tc;
	  while(tc--) 
	  {
		    memset(flg, 0, sizeof(flg));
		    int t = 0, n; 
		    cin >> n;
		    for(int i = 1; i <= n; i++) 
		    {
			      cin >> a[i];
			      flg[a[i]] = true;
			      while(flg[t] == true) 
				        t++;
			      mexl[i] = t;
		    }
		    t = 0;
		    memset(flg, 0, sizeof(flg));
		    for(int i = n; i >= 1; i--) 
		    {
			      flg[a[i]] = true;
			      while(flg[t] == true) 
				        t++;
			      mexr[i] = t;	
		    }
		    int i, res;
		    for(i = 1; i <= n - 1; i++) 
		    {
			      if(mexl[i] == mexr[i + 1]) 
			      {
				        res = i; 
				        break;
			      }
		    }
		    if(i == n) 
			      cout << -1 << endl;
		    else 
			      cout << res << endl;
	  }
	  return 0;
}
