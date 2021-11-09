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
	  int n, k, i, j;
	  cin >> n >> k;
	  int a[n];
	  for(i = 0; i < n; i++)
		    cin >> a[i];
	  i = j = 0;
	  int MAX = -1, MIN = 1000007, l = 0, MAX_len = 1;
	  while(i < n)
	  {     
		    MIN = min(a[i], MIN);
	      MAX = max(a[i], MAX);
	      if(MAX - MIN <= k)
		        MAX_len = max(i - l + 1, MAX_len);
		    else
		    {   
			      l++;
			      i = l;
			      MAX = MIN = a[i];
		    }
		    i++;
	  }
	  cout << MAX_len;
}
