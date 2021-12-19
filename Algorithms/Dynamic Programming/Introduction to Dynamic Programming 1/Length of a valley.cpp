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
	  int tt;
	  cin >> tt;
	  while(tt--)
	  {
		    long long int n, left = 0, right = 0;
		    cin >> n;
		    long long int a[n];
		    for(long long int i = 0; i < n; i++ )
			      cin >> a[i];
		    for(long long int i = 0; i < n; i++ )
		    {
			      if(left < i)
				        left = i;
			      while((a[left] < a[left + 1]) and (left + 1 ) < n)
				        left++;
 			      if(i > 0 && (a[i] >= a[i - 1]))
				        right = i;
					  long long int ans = ( left - right ) + 1;
			      cout << ans << " ";
		    }
				cout << endl;
	  }
}
