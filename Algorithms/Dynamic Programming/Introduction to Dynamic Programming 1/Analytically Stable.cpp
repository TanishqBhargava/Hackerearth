/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    long long int t, val, val1, x, ans, i, j;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> s;
        ans = 0;
        long long int a[10] = {0}, cnt[10] = {0};
        for(j = 0; j < s.length(); j++)
        {
            if(s[j] != '0')
            {
                x = s[j] - 48;
                ans = (ans + a[x]) % 1000000007;
                val = ((cnt[x - 1]) * (cnt[x - 1] - 1)) / 2;
                a[x] = (a[x] + val) % 1000000007;
            }
            cnt[s[j] - 48]++;
        }
        cout << ans << endl;
    }
    return 0;
}
