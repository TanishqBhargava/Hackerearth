/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int d[26][26];

int main()
{
    string s;
    cin >> s;
    memset(d, 63, sizeof d);
    for(int i = 0; i < 26; i++)
        d[i][i] = 0;
    int t;
    cin >> t;
    while(t--)
    {
        char v, u;
        int w;
        cin >> v >> u >> w;
        v -= 'a', u -= 'a';
        d[u][v] = d[v][u] = min(d[v][u], w);
    }
    for(int k = 0; k < 26; k++)
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < 26; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    long long ans = 0;
    for(int i = 0; i < s.size() / 2; i++)
    {
        int cur = INT_MAX;
        for(int c = 0; c < 26; c++)
            cur = min(cur, d[s[i] - 'a'][c] + d[s[s.size() - i - 1] - 'a'][c]);
        assert(cur < INT_MAX);
        ans += cur;
    }
    cout << ans << endl;
}
