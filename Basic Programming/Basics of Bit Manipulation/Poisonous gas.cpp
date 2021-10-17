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
	  int t;
	  cin >> t;
	  while(t--)
	  {
  		  long long int n;
  		  cin >> n;
  		  long long int a[n], i, sum = 0;
  		  for(i = 0; i < n; i++)
		    {
    		    cin >> a[i];
    		    if(a[i] > 0)
      			    sum += a[i];
  		  }
  		  if(sum == 0)
    		    cout << "No" << endl;
   		  else if(ceil(log2(sum)) == floor(log2(sum)))
    		    cout << "Yes" << endl;
  		  else
  			    cout << "No" << endl;
	  }
  	return 0;
}
