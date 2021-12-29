/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;    
	cin >> n;
    int arr[n], dp[n], ans = 1;    
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
    for(int i = 0; i < n; ++i)
	{
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
		{
            if(arr[j] < arr[i])
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        ans = max(ans, dp[i]);
    }
    string temp = "";
    while(ans) 
	{
        temp += char(ans % 2 + '0');
        ans /= 2;
    }
    reverse(temp.begin(), temp.end());
    cout << temp;
    return 0;
}
