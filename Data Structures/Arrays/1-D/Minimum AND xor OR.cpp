/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[n], ans = INT_MAX;
        for(long long int i = 0; i < n; i++)
        	cin >> a[i];
        sort(a, a + n);
        for(long long int i = 0; i < n - 1; i++)
        	ans = min(ans, a[i] ^ a[i + 1]);
        cout << ans << endl;
    }
    return 0;
}
