/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 	int n, t, arr[105];
	bool dp[10005];
 	cin >> t;
 	while(t--)
 	{
     	for(int i = 0; i < 10001; i++)
     		dp[i] = false;
      	cin >> n;
     	for(int i = 0; i < n; i++)
     		cin >> arr[i];
 		dp[0] = true;
 		for(int i = 0; i < n; i++)
 		{
     		for(int j = 10000; j >= 0; j--)
     		{
         		if((j - arr[i]) >= 0)
            		dp[j] |= dp[j - arr[i]];
     		}
 		}
		int cnt = 0; 
 		for(int i = 0; i < 10001; i++)
 		{
     		if(dp[i])
        		cnt++;
 		}
 		cout << cnt << endl;
 	}
}
