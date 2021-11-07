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
  	int n, cost = 0;
  	cin >> n;
  	string a, b;
  	cin >> a >> b;
  	a[n] = b[n] = '0';
  	for(int i = 0; i < n; i++)
  	{
    	  if(a[i] != b[i])
    	  {
      		  cost++;
      		  if(a[i] != a[i + 1] && b[i + 1] != a[i + 1])
			  	      i++;
    	  }
  	}
    cout << cost << endl;
}
