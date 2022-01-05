/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int spf[1000001];
bool mk[1000001];

bool check()
{
  	int x; 
	cin >> x; 
	if(x < 4) 
		return false;
  	long long y = x; 
	vector<int> vec;
	while(x != 1) 
	{ 
		int xx = spf[x]; 
		vec.emplace_back(xx); 
		while(x % xx == 0) 
			x /= xx; 
	}
  	for(int i = 0; i < vec.size(); ++i) 
	  	for(int j = i; j < vec.size(); ++j) 
		  	if(y % (vec[i] * vec[j]) == 0 and mk[y / (vec[i] * vec[j])]) 
			  	return true;
  	return false;
}

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	for(int i = 2; i <= 1000000; ++i) 
	  	if(spf[i] == 0) 
		  	for(int j = i; j <= 1000000; j += i) 
			  	if(spf[j] == 0) 
				  	spf[j] = i;
  	int n, q; 
	cin >> n >> q;
  	while(n--)
	{ 
		int x; 
		cin >> x; 
		mk[x] = true; 
	}
  	for(long long i = 2; i <= 1000000; ++i) 
	  	if(mk[i]) 
		  	for(long long j = i; j <= 1000000; j *= i) 
			  	mk[j] = true;
  	mk[1] = true;
  	while(q--)
		check() ? cout << "YES" << endl : cout << "NO" << endl; 
  	return 0;
}
