/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long int qt(long long int n)
{
    if(n % 2 == 0) 
        return n * (n + 2);
    return (n + 1) * (n + 1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    long long int p;
    cin >> t;
    while(t--)
    {
        cin >> p;
        long long int li = 1, ls = 1e8, mid, ans = -1;
        while(li <= ls)
        {
            mid = (li + ls)>>1;
            long long int q = qt(mid) + qt(mid + 1);
            if(q <= p)
            {
                li = mid + 1;
                ans = mid;
            }
            else 
                ls = mid - 1;
        }
        if(ans == -1)
            puts("0 0");
        else if(ans % 2 == 0) 
            cout << ans + 1 << " " << ans << endl;
        else
            cout << ans << " " << ans + 1 << endl;
    }
    return 0;
}
