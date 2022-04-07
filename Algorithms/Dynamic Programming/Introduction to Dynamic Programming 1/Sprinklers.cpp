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
    long long int t; 
	cin >> t; 
	while(t--)
    {
       	long long int n, q; 
		cin >> n >> q;
       	vector<long long int>x(n), r(n);
       	for(auto &it : x) 
		   	cin >> it;
       	for(auto &it : r) 
		   	cin >> it;
       	vector<long long int>ans(4 * n + 5, 0);
       	for(int i = 0; i < n; i++)
		{
           	long long int left = x[i] - r[i] + 2 * n, right = x[i] + r[i] + 2 * n + 1;
           	if(x[i] > 0)
               	left = max(left, 2 * n);
            else
               	right = min(right, 2 * n);
           	ans[left]++;
           	ans[right]--;
       	}
       	for(int i = 1; i < 4 * n + 5; i++)
           	ans[i] += ans[i - 1];
        while(q--)
		{
           int inp; 
		   cin >> inp;
           inp += 2 * n;
           cout << ans[inp] << endl;
       	}
    }
	return 0;
}
