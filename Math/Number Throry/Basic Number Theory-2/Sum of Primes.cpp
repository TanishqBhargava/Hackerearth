/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<bool> isPrime(1000001, true);
    vector<long long> prime_sum(1000000);
    for (int i = 2; i * i < 1000000; i++)
        if (isPrime[i])
            for (int j = i * i; j < 1000000; j += i)
                isPrime[j] = false;
    for (int i = 2; i < 1000000; i++)
    {
        if (isPrime[i])
            prime_sum[i] = prime_sum[i - 1] + i;
        else
            prime_sum[i] = prime_sum[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prime_sum[r] - prime_sum[l - 1] << endl;
    }
    return 0;
}
