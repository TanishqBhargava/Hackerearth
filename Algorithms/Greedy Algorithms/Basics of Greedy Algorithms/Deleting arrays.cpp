/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	  int t;
	  cin >> t;
	  while(t--)
	  {
		    long n, k, ans = 0;
		    cin >> n >> k;
		    ans = ceil(n / (2.0 * k + 1));
		    cout << ans << endl;
	  }
}
