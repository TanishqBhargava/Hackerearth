/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, k, ia[1000010], ib[1000010], pos[1000010], ee[100010];

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<int> graph[100010], tmp[100010], ans;
    cin >> n >> m >> k;
    for(int i = 0, a, b; i < m; i++) 
	{
        cin >> a >> b;
        graph[a].insert(b);
    }
    for(int i = 0; i < k; i++) 
        cin >> ia[i] >> ib[i];
    pos[0] = 1;
    int cp = 1;
    for(int i = 0; i < k; i++) 
	{
        if(cp == ia[i]) cp = ib[i];
        pos[i + 1] = cp;
    }
    for(int i = 1; i <= n; i++) 
        ee[i] = i;
    ans.insert(pos[k]);
    for(int i = k - 1; i >= -1; i--) 
	{
        int cnode = pos[i + 1];
        for(int j : graph[cnode]) 
		{
            ans.insert(ee[j]);
            tmp[j].insert(cnode);
        }
        graph[cnode].clear();
        if(i >= 0) 
		{
            ee[ia[i]] = ee[ib[i]];
            for(int j : tmp[ia[i]]) 
                graph[j].insert(ia[i]);
            tmp[ia[i]].clear();
        }
    }
    cout << ans.size() << endl;
    vector<int> xx(ans.begin(), ans.end());
    sort(xx.begin(), xx.end());
    for(int i = 0; i < ans.size(); i++) 
        printf("%d%c", xx[i], " \n"[i == ans.size() - 1]);
}
