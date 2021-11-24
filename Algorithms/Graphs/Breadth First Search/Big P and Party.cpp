/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a, b, u, v;
	cin >> a >> b;
	vector<int>adj[a], visit(a, 0), cnt(a, 0);
	for(int i = 0; i < b; i++)
    {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	queue<int>q;
	q.push(0);
	visit[0] = 1;
	while(!q.empty())
    {
		int prsn = q.front();
		q.pop();
		for(auto i : adj[prsn])
        {
			if(!visit[i])
            {
				visit[i] = 1;
				cnt[i] = cnt[prsn] + 1;
				q.push(i);
			}
		}
	}
	for(int i = 1; i < a; i++)
    {
		if(cnt[i] == 0)
			cout << "-1" << endl;
		else
		    cout << cnt[i] << endl;
	}
	return 0;
}
