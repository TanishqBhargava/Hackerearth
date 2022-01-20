/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()  
{  
	int t;
    cin >> t;
    while(t--)
    {
        int n, a, b, c, count = 0, ans = 0;
        cin >> n >> a >> b >> c;
        for(int i = 1; i <= n; i++)
        {
            count = 0;
            if(i % a == 0)
                count++;
            if(i % b == 0)
                count++;
            if(i % c == 0)
                count++;
            if(count == 1)
                ans++;
        }
        cout << ans << endl;
    }
}
