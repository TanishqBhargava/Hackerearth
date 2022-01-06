/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long int f[10000001], g[10000001];
 
int main()	
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    assert(cin >> t);
    assert(t >= 1 && t <= 1000000);
    for(int i = 1; i <= 10000000; i++) 
	{
        for(int j = i; j <= 10000000; j += i) 
		{
            f[j] += i;
            g[j] += i * 1LL *  i;
        }
    }
    while(t--) 
	{
        int n;
        assert(cin >> n);
        assert(n >= 1 && n <= 10000000);
        cout << (f[n] * f[n] - g[n]) / 2LL << endl;
    }
}
