/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int a[3], b[3], t[9];
        cin >> a[0] >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
        for(int &i : t)
            cin >> i;
        int per[9], c[3], d[3];
        memcpy(c, a, sizeof a);
        memcpy(d, b, sizeof b);
        iota(per, per + 9, 0);
        long long ans = 1e18;
        do 
        {
            long long cur = 0;
            for_each(per, per + 9, [&](int i) 
            {
                int x = min(a[i / 3], b[i % 3]);
                cur += (long long) t[i] * x;
                a[i / 3] -= x;
                b[i % 3] -= x;
            });
            ans = min(ans, cur);
            memcpy(a, c, sizeof a);
            memcpy(b, d, sizeof b);
        } 
        while(next_permutation(per, per + 9));
            cout << ans << endl;
    }
}
