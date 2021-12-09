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
	unordered_map<string,int>mp;
	int n;
	string temp;
	cin >> n;
	int dp[n+1][n+1];
	for(int i=0; i<n; i++)
	{ 
		cin >> temp;
		mp[temp] = i;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin >> dp[i][j];
	}
	long long int total = 0;
	int nn, row = 0;
	cin >> nn;
	while(nn--)
	{
		cin >> temp;
		if(row == mp[temp])
			continue;
		total += dp[row][mp[temp]];
		row = mp[temp];
	}
	cout << total;
	return 0;
}
