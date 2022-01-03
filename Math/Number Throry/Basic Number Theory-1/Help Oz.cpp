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
	int n, maxi = 0;
	cin >> n;
	int ar[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ar[i];
		maxi = max(maxi, ar[i]);
	}
	for(int k = 2; k < maxi / 2; k++)
	{
		int mod = ar[0] % k, fg = 1;
		for(int i = 1; i < n; i++)
		{
			if(ar[i] % k != mod)
			{
				fg = 0;
				break;
			}
		}
		if(fg)
			cout << k << " ";
	}
}
