/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
string txt, pat;
int dp[200005], cost[200005], n, cantake[200005], n1;

int solve()
{
    dp[n] = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        dp[i] = dp[i + 1];
        if(cantake[i])
            dp[i] = max(dp[i], cost[i] + dp[i + n1]);
    }
    return dp[0];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int i, j, k, f[200005], t;
    cin >> t;
    while(t--)
    {
        cin >> txt >> pat;
        memset(dp, 0, sizeof dp);
        memset(cantake, 0, sizeof cantake);
        cin >> n;
        for(i = 0; i < txt.size(); i++)
            cin >> cost[i];
        f[0] = 0;
        j = 0;
        n1 = pat.size();
        for(i = 1; i < pat.size(); i++)
        {
            while(j > 0 && pat[j] != pat[i])
                j = f[j - 1];
            if(pat[i] == pat[j])
            j++;
            f[i] = j;
        }
        j = 0;
        for(i = 0; i < txt.size(); i++)
        {
            while(j > 0 && pat[j] != txt[i])
                j = f[j - 1];
            if(pat[j] == txt[i])
                j++;
            if(j == pat.size())
            {
                j = f[j - 1];
                cantake[i - pat.size() + 1] = 1;
            }
        }
        cout << solve() << endl;
    }
    return 0;
}
