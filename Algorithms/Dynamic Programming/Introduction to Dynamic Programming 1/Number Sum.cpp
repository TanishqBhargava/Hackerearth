/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0, arr[5005], mp[5005];
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n; i++) 
	{
		int mex = 1;
		memset(mp, 0, sizeof mp);
		for(int j = i; j < n; j++) 
		{
			if(arr[j] < 5005)
				mp[arr[j]] = 1;
			while(mp[mex])
				mex ++;
			ans += mex;
		}
	}
	cout << ans;
}
