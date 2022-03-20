/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long n, a, b, ans;
vector <long long> graph[300004];
 
long long solve(long long cur, long long par)
{
    long long res = 1;
    for(int i = 0; i < graph[cur].size(); i++)
    {
        long long v = graph[cur][i];
        if(v == par)
            continue;
        res = (res * (solve(v, cur) + 1)) % 1000000007;
    }
    ans = (ans + res) % 1000000007;
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    solve(1, 1);
    ans++;
    cout << ans;
    return 0;
}
