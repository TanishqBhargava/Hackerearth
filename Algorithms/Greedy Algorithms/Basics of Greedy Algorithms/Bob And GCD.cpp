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
		    int n, k; 
		    cin >> k >> n;
		    long long int arr[n], sum = 0;
		    for(int i = 0; i < n; i++)
		    {
			      cin >> arr[i];
			      if(arr[i] <= k)
			      {
				        sum += (k - arr[i]);
				        continue;
			      }
			      bool a = 0;
			      if((arr[i] % k) > (k/2)) 
				        a = 1;
			      if(a) 
				        sum += (arr[i] / k + 1) * k - arr[i];
			      else 
				        sum += arr[i] - (arr[i] / k) * k;
		    }
		    cout << sum << endl;
	  }
	  return 0;
}
