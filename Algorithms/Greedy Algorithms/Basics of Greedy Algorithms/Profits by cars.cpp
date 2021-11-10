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
	  long t, n, i, sum;
	  cin >> t;
	  while(t--)
	  {
		    sum = 0;
		    cin >> n;
		    long* a = new long[n];
		    for(i = 0; i < n; i++)
			      cin >> a[i];
		    sort(a, a + n);
		    for(i = 0; i < n; i++)
		    {
			      if(a[i] == a[i + 1])
				        continue;
			      sum += a[i];
		    }
		    cout << sum << endl;
	  }
}
