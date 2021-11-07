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
	  long long t;
	  cin >> t;
	  while(t--)
	  {
	      long long n, a, ans = 0;
	      cin >> n;
		    vector<long long> freq(1001, 0);
		    for(long long i = 0; i < n; i++)
		    {
			      cin >> a;
			      freq[a]++;
		    }
		    for(long long i = 1; i <= 1000; i++)
		    {
			      for(long long j = 1; j <= 1000; j++)
			      {
				        if(j > i)
					          break;
				        if((i ^ j) == (i - j))
					          ans += (freq[i] * freq[j]);
			      }
		    }
		    cout << ans << endl;
	  }
}
