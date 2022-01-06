/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
bool prime[1000005];
 
void sieve()
{
    int i, j;
    memset(prime, false, sizeof(prime));
    prime[0] = prime[1] = true;
    for(i = 2; i * i < 1000005; ++i)
        if(prime[i] == false)
            for(j = i * i; j < 1000005; j += i)
                prime[j] = true;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, mx = 0, mi = 1000010, a;
    cin >> n;
    sieve();
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        if(prime[a] == false)
        {
            mi = min(mi, a);
            mx = max(mx, a);
        }
    }
    if(mx)
        cout << mx - mi << endl;
    else
        cout << -1 << endl;
    return 0;
}
