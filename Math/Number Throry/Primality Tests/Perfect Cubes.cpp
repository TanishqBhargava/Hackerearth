/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int sumpf[1001][501], spf[501], idxs[501];
long long h1[1001][1001];
unordered_map<long long, int> mp;

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	int idx=0;
  	for(int i = 2; i <= 500; ++i) 
		if(spf[i] == 0)
		{
      		idxs[i] = idx++;
      		for(int j = i; j <= 500; j += i) 
			  	if(spf[j] == 0) 
				  	spf[j]=i;
  		}
  	int t; 
	cin >> t; 
	for(int i = 0, k, x; i < t; ++i)
	{
    	cin >> k; 
		while(k--)
		{
      		cin >> x; 
			for(int xx = idxs[spf[x]]; x != 1; x /= spf[x], xx = idxs[spf[x]])	
			 	sumpf[i][xx] = ++sumpf[i][xx] % 3;
    	}
  	}
  	long long res = 0;
  	for(int i = 0; i < t; ++i)
	{
    	for(int j = i + 1; j < t; ++j)
		{
      		long long x = 0;
      		for(int k = 0; k < idx; ++k)
			{
        		x = (x<<1) + x + ((sumpf[i][k] + sumpf[j][k]) % 3);
        		h1[i][j] = 3 * h1[i][j] + ((3 - (sumpf[i][k] + sumpf[j][k]) % 3) % 3);
      		}
      	res += mp[x];
    	}
    	for(int j = 0; j < i; ++j) 
			mp[h1[j][i]]++;
  	}
  	cout << res;
  	return 0;
}
