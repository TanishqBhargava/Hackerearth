/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

long long int solve(vector<long long int>&a, long long int c01, long long int c10, long long int st)
{
    long long int ans = 0;
    for(auto it : a)
	{
        if(it != st)
            ans += (it == 0 ? c01 : c10);
        st ^= 1;
    }
    return ans;
}

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int t; 
	cin >> t; 
	while(t--)
    {
      	long long int n, c01, c10, ans = 1000000000000000000;
      	cin >> n >> c01 >> c10;
      	vector<long long int>a(n);
      	for(auto &it : a) 
		  	cin >> it;
      	ans = min(ans, solve(a, c01, c10, 0ll));
      	ans = min(ans, solve(a, c01, c10, 1ll));
      	cout << ans << endl;
    }
	return 0;
}
