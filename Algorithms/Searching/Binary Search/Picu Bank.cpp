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
	  int t;
    cin >> t;
    while(t--)
    {
        long int d, a, m, b, x, ans = 0, rem = 0;
        cin >> d >> a >> m >> b >> x;
        ans += (x - d) / (a * m + b) * (m + 1);
        rem = (x - d) % (a * m + b);
        if(rem > (a * m))
            ans += m + 1;
        else
        {
            if(rem % (a) == 0)
                ans += rem / (a);
            else
                ans += (rem / (a) + 1);
        }
        cout << ans << endl;
    }
}
