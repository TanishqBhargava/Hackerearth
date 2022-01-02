/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

long long binaryexp(long long  a, long long  b)
{
    long long ans = 1;
    while(b)
	{
        if(b & 1)
            ans = (ans * a) % 1000000007; 
        a = (a * a) % 1000000007;
        b>>=1;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    long long  a[n] , b = 1, c = 0;
    for(auto &x : a) 
		cin >> x;
    for(int i = 0 ; i < n ; i++) 
		b = (b * a[i]) % 1000000007;
    for(int i = 0 ; i < n ; i++)
        c = __gcd(c, a[i]);
    cout << binaryexp(b, c);
    return 0;
}
