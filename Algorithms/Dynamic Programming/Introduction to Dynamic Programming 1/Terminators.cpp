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
    int t;
    cin >> t;
    while(t--) 
	{
        int n;
        cin >> n;
        pair <int, int> arr[n];
        for(int i = 0; i < n; ++i) 
		{
            int a, b;
            cin >> a >> b;
            arr[i] = {a, b};
        }
        sort(arr, arr + n);
        int dp[n], ans = 0;
        for(int i = 0; i < n; ++i) 
		{
            dp[i] = 1;
            for(int j = 0; j < i; ++j) 
			{
                if(arr[i].second > arr[j].second)
                    dp[i] = max(dp[i], 1 + dp[j]);
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
