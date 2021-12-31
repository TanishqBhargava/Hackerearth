/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        long long ans, n;
        cin >> n;
        long long a[n], i;
        for(i = 0; i < n; i++)
        	cin >> a[i];
        long long g = a[0], pre = a[0];
        for(i = 1; i < n; i++)
        {
            g = __gcd(pre, a[i]);
            pre = (pre * a[i]) / g;
        }
        cout << pre << endl;
    }
}
