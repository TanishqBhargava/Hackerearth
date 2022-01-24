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
	int t, n,  m, k, ans, arr[100010];
    cin >> t;
    while(t--)
	{
        cin >> n >> arr[0];
        ans = 1;
        for(int i = 1; i < n; i++)
		{
            cin >> arr[i];
            if(arr[i] <= arr[i - 1]) 
				ans++;  
            else 
				arr[i] = arr[i - 1];        
        }
        cout << ans << endl;
    }
    return 0;
}
