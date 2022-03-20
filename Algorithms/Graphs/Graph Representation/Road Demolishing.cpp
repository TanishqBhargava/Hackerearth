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
    int ntest;
    long long n, q;
    cin >> ntest;
    while(ntest--) 
    {
        cin >> n >> q;
        q--;
        long long nf = n / q, nc = (n + q - 1) / q, ss = n % q;
        long long ans = (n * n - ss * nc * nc - (q - ss) * nf * nf) / 2;
        ans = (n * (n - 1)) / 2 - ans;
        cout << ans << endl;
    }
    return 0;
}
