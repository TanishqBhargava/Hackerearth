/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int pr[1000001], pre[78498];

int main()
{
  	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  	int i, cnt = 1; pre[0] = 2;
  	for(i = 3; i * i <= 1000000; i += 2) 
	  	if(pr[i] == 0)
		{ 
			pre[cnt++] = i; 
			for(int j = i * i; j <= 1000000; j += (i<<1)) 
				pr[j] = 1;
		}
  	for(; i <= 1000000; i += 2) 
	  	if(pr[i] == 0) 
		  	pre[cnt++] = i;
  	int t; 
	cin >> t; 
	while(t--)
	{ 
		int l, r, res = 0, j = 1; 
		cin >> l >> r; 
		for(auto p : pre)
		{ 
			res += upper_bound(pre + j, pre + 78498, r / p) - lower_bound(pre + j++, pre + 78498, l / p + (l % p > 0)); 
			if(p * p >= r) 
				break; 
		} 
		cout << res << endl; 
	}
  	return 0;
}
