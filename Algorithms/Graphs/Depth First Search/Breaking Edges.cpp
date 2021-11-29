/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, val[200009], vis[200009], a, b, vis2[200009], cnt, countbit[200009][28];
vector<int> v[200009];
 
void update(int node,int child)
{
    int x = 1, i = 0;
    while (i < 27)
	{
        if (node == child)
            countbit[node][i] = (val[node]&x?1:0);
        else
        	countbit[node][i] += countbit[child][i];
        i++;
        x<<=1;
    }
}
 
void dfs(int node)
{
    vis[node] = 1;
    for (int child: v[node])
	{
        if (vis[child] == 0)
            dfs(child);
    }
    update(node, node);
    for (int child: v[node])
	{
        if (vis2[child] == 1)
            update(node, child);
    }
    vis2[node] = 1;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) 
		cin >> val[i];
    for (int i = 0; i < n - 1; i++)
	{
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for (int i = 2; i <= n; i++)
	{
        int flag = 1;
        for (int j = 0; j < 28; j++)
		{
            if (countbit[1][j])
			{
                if (countbit[1][j] <= countbit[i][j] || countbit[i][j] == 0)
                    flag = 0;
            }
        }
        if (flag) 
			cnt++;
    }
    cout << cnt << endl;
    return 0;
}
