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
    long long t, n, a;
    cin >> t;
    while(t--)
    {
        long long ans = 0;
        cin >> n;
        for(long long i = 5; n / i > 0; i *= 5)
            ans += n / i;
        cout << ans << endl;
    }
}
