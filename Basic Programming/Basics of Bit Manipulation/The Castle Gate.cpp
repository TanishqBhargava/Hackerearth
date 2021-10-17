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
	  int ans[3001] = {0}, fans[3001] = {0};
	  for(int i = 1; i <= 2000; i++)
	  {
		  for(int j = 1; j < i; j++)
			    ans[((i) ^ (j))] += 1;
		  for(int ii = 0; ii <= i; ii++)
			    fans[i] += ans[ii];
	  }
	  int t, n;
	  cin >> t;
	  while(t--)
	  {
		    cin >> n;
		    cout << fans[n] << endl;
	  }
}
