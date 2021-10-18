/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  int t;
	  cin >> t;
	  while(t--)
    {
		    int n, k;
		    cin >> n >> k;
		    int a[n + 1], b[n + 1];
		    for(int i = 1; i < n + 1; i++)
		    {
			      cin >> a[i];
			      b[i] = __builtin_popcount(a[i]);
		    }
		    sort(b + 1, b + n + 1);
		    reverse(b + 1, b + n + 1);
		    int sum = 0;
		    for(int i = 1; i < k + 1; i++)
			      sum += b[i];
		    cout << sum << endl;
	  }										
}
