/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;  
vector<int> prime(1000008, 1), pre1(1000008, 0), good(1000008, 0), final(1000008, 0);

int main()  
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= 1000007; i++)
    {
        if(prime[i] == 0)
            continue;
        for(int j = i * i; j <= 1000007; j += i)
            prime[j] = 0;
    }
    for(int i = 1; i <= 1000007; i++)
        pre1[i] = pre1[i - 1] + prime[i];
    for(int i = 1; i <= 1000007; i++)
    {
        if(prime[pre1[i]])
            good[i] = 1;
    }
    for(int i = 1; i <= 1000007; i++)
        final[i] = final[i - 1] + good[i];
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        cout << final[r] - final[l - 1] << endl;
    }
}
