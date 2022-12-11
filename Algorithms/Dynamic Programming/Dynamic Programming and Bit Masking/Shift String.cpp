/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, answer = INT_MAX;
    string s;
    cin >> n >> s >> m;
    vector<string> x(++m, s);
    for(int i = 0; i < m - 1; ++i)
        cin >> x[i];
    vector<vector<int>> distance(m, vector<int> (m, 0)), best(1<<(m - 1), vector<int>(m, INT_MAX));
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            for(int k = 0; k < n; ++k)
            {
                int diff = abs(x[i][k] - x[j][k]);
                distance[i][j] += min(diff, 26 - diff);
            }
        }
    }
    for(int visited = 1; visited < (1<<(m - 1)); ++visited)
    {
        for(int last = 0; last < (m - 1); ++last)
        {
            if(!(visited & 1<<last)) 
                continue;
            if(visited == 1 << last) 
                best[visited][last] = distance[(m - 1)][last];
            else 
            {
                int prev_visited = visited ^ 1<<last;
                for(int prev = 0; prev < (m - 1); ++prev) 
                {
                    if(!(prev_visited & 1<<prev)) 
                        continue;
                    best[visited][last] = min(best[visited][last], distance[last][prev] + best[prev_visited][prev]);
                }
            }
        }
    }
    for(int last = 0; last < m - 1; ++last) 
        answer = min(answer, best[(1<<(m - 1)) - 1][last]);
    cout << answer;
    return 0;
}
