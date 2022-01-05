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
    long long int t, n, m, k, x, y, r, ans, c;
    cin >> t;
    int arr[100019];
    while (t--) 
	{
        cin >> n;
        memset(arr, 0, sizeof(arr));
        for (long long i = 0; i < n; i++)
        {
            cin >> x;
            arr[x] += 1;
        }
        for (long long i = 1; i <= 100011; i++)
			arr[i] += arr[i - 1]; 
        ans = 0;
        for (int i = 1; i < 100003; i++) 
		{
            if (arr[i] - arr[i - 1]) 
			{
                int bottom = i / 2 - (i % 2 == 0);
                int top = bottom + i;
                for (int j = 1; bottom < 100005; j++) 
				{
                    ans += j * (arr[i] - arr[i - 1]) * (arr[top < 100005 ? top : 100005] - arr[bottom]);
                    top += i;
                    bottom += i;
                }
            }
        }
        cout << ans << endl;
	}
    return 0;
}
