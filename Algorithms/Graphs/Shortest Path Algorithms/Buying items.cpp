/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, m, ar[505][505], dp[505][505];
long long cost[505], ans = 1000000000000000;

long long solve(set<int> st, int s, long long c)
{
    if(c >= ans)
        return 1000000000000000;
    if((int)st.size() == n)
    {
        ans = min(ans, c);
        return c;
    }
    if(s >= m)
        return 1000000000000000;
    else
    {
        long long r1 = solve(st, s + 1, c);
        for(int i = 0; i < n; i++)
        {
            if(ar[s][i] == 1)
            st.insert(i);
        }
        long long r2 = solve(st, s + 1, c + cost[s]);
        return min(r1, r2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> ar[i][j];
        cin >> cost[i];
    }
    set<int> st;
    long long res = solve(st, 0, 0);
    cout << res << endl;
}
