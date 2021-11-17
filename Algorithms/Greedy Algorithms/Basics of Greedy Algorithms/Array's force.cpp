/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t, n, m, i, j, k, md, arr[1000002], freq[1000002];;
	long long int ans, tmp;
 	cin >> t;
	while(t--) 
    {
		cin >> arr[0] >> arr[1] >> n >> md;
		memset(freq, 0, sizeof(freq));
		freq[arr[0]]++;
		freq[arr[1]]++;
		k = max(arr[0], arr[1]);
		for (i = 2; i < n; ++i) 
        {
			arr[i] = (arr[i-1] + arr[i-2]) % md;
			freq[arr[i]]++;
			k = max(k, arr[i]);
		}
		ans = 0;
		for (i = 0; i <= k; ++i) 
        {
		    tmp = freq[i];
		    ans += (tmp*tmp);
		}
		cout << ans << endl;
	}
	return 0;
}
