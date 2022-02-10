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
  	int n;
  	cin >> n;
  	long long ans = 1;
  	for(int i = 0; i < n; i++) 
  	{
    	int num;
    	cin >> num;
    	long long odd = (num + 1) / 2;
    	long long even = num - odd + 1, oddWays = odd * odd;
		long long evenWays = even * even;
    	ans = (ans * ((oddWays + evenWays) % 1000000007)) % 1000000007; 
  	}
  	cout << ans << endl;
  	return 0;
}
