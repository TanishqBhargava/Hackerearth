/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long int ans = -1, arr[1000], dp[3000009];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long int n, m = 0, i, j;
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    dp[0] = 1;
    for (i = 0; i < n; ++i)
        for (j = arr[i]; j <= 2 * m; ++j)
            dp[j] |= dp[j - arr[i]];
    for (i = m + 1; i <= 2 * m; ++i)
        if (dp[i] == 0)
        {
            ans = i;
            break;
        }
    if (ans != -1)
        cout << ans << endl;
    else
        cout << "Fake Offer!" << endl;
	return 0;
}
