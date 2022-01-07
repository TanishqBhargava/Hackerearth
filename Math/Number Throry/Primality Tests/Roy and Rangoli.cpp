/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
bool prime[2000000];

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	memset(prime, true, sizeof(prime));
  	for(int i = 2; i * i <= 2000000; ++i) 
	  	if(prime[i]) 
		  	for(int j = i * i; j <= 2000000; j += i) 
			  	prime[j] = false;
  	int n, i, j; 
	long long res = 0; 
	cin >> n; 
	n--; 
	if(n < 2) 
	{ 
		cout << n; 
		return 0; 
	}
  	for(i = 2; i <= n; ++i) 
	  	if(prime[i]) 
		  	res += i + 1;
  	for(j = n + 1, i -= 1; j <= 2 * n; ++j, --i) 
	  	if(prime[j]) 
		  	res += i;
  	cout << res % 1000000007;
  	return 0;
}
