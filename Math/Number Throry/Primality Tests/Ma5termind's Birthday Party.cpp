/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int prime[1000001], res[1000001];

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	for(int i = 2; i * i <= 1000000; ++i) 
	  	if(prime[i] == 0) 
		  	for(int j = i * i; j <= 1000000; j += i) 
			  	prime[j] = 1;
  	prime[1] = 1, prime[4] = 0;
  	for(int i = 1; i <= 1000000; ++i) 
	  	res[i] = res[i - 1] + prime[i];
  	int t; 
	cin >> t;
  	while(t--)
	{ 
		int x, y; 
		cin >> x >> y; 
		cout << res[y] - res[x - 1] << "\n"; 
	}
  	return 0;
}
