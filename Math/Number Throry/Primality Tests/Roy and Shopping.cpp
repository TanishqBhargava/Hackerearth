/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxN 1000005
ll isPrime[maxN];

void sieve()
{
    for(ll i = 1; i < maxN; i++)
        isPrime[i] = i;
    for(ll i = 4; i < maxN; i += 2)
        isPrime[i] = 2;
    for(ll i = 3; i < maxN; i += 2)
    {
        if(isPrime[i] == i)
        {
            for(ll j = i * i; j < maxN; j += i)
                isPrime[j] = min(isPrime[j], i);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    cout << (n - isPrime[n]) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sieve();
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
