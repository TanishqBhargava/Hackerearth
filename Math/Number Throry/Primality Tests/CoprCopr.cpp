/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
double prime[10000001];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(14);
    for(int i = 2; i <= sqrt(10000000); ++i) 
        if(prime[i] == 0) 
            for(int j = i * i; j <= 10000000; j += i) 
                if(prime[j] == 0) 
                    prime[j] = j;
    for(int i = 2; i <= 10000000; ++i)
    {
        if(prime[i] == 0)
        {
            for(int j = 2 * i; j <= 10000000; j += i) 
                prime[j] *= (i - 1.0) / i;
            prime[i] = i - 1;
        }
    }
    prime[1] = 1;
    for(int i = 2; i <= 10000000; ++i) 
        prime[i] += prime[i - 1];
    int t; 
    cin >> t; 
    while(t--)
    { 
        int n; 
        cin >> n; 
        cout << prime[n] << endl; 
    }
    return 0;
}
