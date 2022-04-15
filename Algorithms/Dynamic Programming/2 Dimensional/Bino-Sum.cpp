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
    long long t , n , p , ans = 0, C[1001][1001];
    for(int n = 0; n <= 1000; ++n) 
	{
        C[n][0] = C[n][n] = 1;                                               
		for(int k = 1; k < n; ++k)
            C[n][k] = (C[n - 1][k - 1] % 1000000007 + C[n - 1][k] % 1000000007) % 1000000007;      
    }
    cin >> t;
    while(t--)
	{
        ans = 0;
        cin >> n >> p;
        for(int i = 0; i <= p; i++)
            ans = (ans % 1000000007 + C[n][i] % 1000000007) % 1000000007;                   
        cout << ans << endl;
    }
    return 0;
}
