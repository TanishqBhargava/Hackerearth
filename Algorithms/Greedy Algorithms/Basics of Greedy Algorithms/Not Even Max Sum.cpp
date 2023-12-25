/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std; 
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int T = 1;
    cin >> T; 
    for(long long int i = 1; i <= T; i++)
    {
        long long int n, sm = 0, mi = INT_MAX;
        cin >> n;
        for(long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            sm += x;
            if(x % 2 == 1) 
                mi = min(mi, x);
        }
        if(sm % 2) 
        {
            cout << sm << endl;
            continue;
        }
        if(mi == INT_MAX) 
            cout << 0 << "\n";
        else 
            cout << sm - mi << "\n";
    }
    return 0;
}
