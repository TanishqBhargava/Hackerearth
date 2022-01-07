/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

unsigned long long power(unsigned long long a, int p, int mod)
{
    unsigned long long ret = 1;
    while(p)
    {
        if(p & 1)
			ret = (ret * a) % mod;
        a = (a * a) % mod;
        p /= 2;
    }
    return ret;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, p, n; 
	cin >> t;
    while(t--)
    {
        unsigned long long a,d;  
        cin >> a >> d >> p;
        a %= p; 
		d %= p;
        if(a == 0)
            n = 0;
        else if(d == 0)
            n = -1;
        else
        {
            unsigned long long x = power(d, p - 2, p);
            n = (x * (p - a)) % p; 
        }
        cout << n << endl;
    }
    return 0;
}
