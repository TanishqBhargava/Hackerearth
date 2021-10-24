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
	  int a[200020], n , k , P , Q;
	  cin >> n >> k >> P >> Q;
	  for(int i = 0; i < n; i++)
		    cin >> a[i];
	  sort(a , a + n);
	  int pt = 0 , res = 0;
	  for(int i = 0; i < n; i++)
	  {
		    while(1LL * a[i] * Q > 1LL * P * a[pt])
			      pt++;
		    res = max(res , min(n , i - pt + 1 + k));
	  }
	  cout << res << endl;
}
