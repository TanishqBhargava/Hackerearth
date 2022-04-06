/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int start;

void dfs(int st, vector<int>&v, vector<int>&dp, vector<int>&vis, vector<int>&push)
{   
    vis[st]++;
    push[st]++;
        if(!vis[v[st]])
            dfs(v[st], v, dp, vis, push);
        if(!push[v[st]])
            dp[st] = max(dp[st], dp[v[st]] + 1);
        else
            start = v[st];
    push[st]--;
}

void dfs2(int st, vector<int>&v, vector<int>&dp)
{
    if(st == start)
        return;
    else
        dp[st] = dp[start], dfs2(v[st], v, dp);
}

int main()
{   
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0, m_val = 0;
        cin >> n;
        vector<int> dp(n, 1), vis(n, 0), push(n, 0), v(n);
        for(auto &i : v) 
            cin >> i;
        for(int i = 0; i < n; i++)
        {
            start = -1;
            if(!vis[i])
                dfs(i, v, dp, vis, push);
            if(start != -1)
                dfs2(v[start], v, dp);
        }
        for(int i = 0; i < n; i++)
        {   
            if(dp[i] > m_val)
            {
                ans = i;
                m_val = dp[i];
            }
        }
        cout << ans << endl;
    }
}
