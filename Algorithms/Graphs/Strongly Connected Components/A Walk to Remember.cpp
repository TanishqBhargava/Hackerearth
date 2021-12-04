/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, id, ID[100001], mnID[100001], freq[100001];
stack<int> st;
bool inSt[100001];
vector<int> adj[100001];
 
bool pop(int node, int mn) 
{
	int ret = st.top() != node;
	mnID[st.top()] = mn;
	inSt[st.top()] = 0;
	st.pop();
	return ret;
}
 
int tarjan(int node) 
{
	ID[node] = mnID[node] = id++;
	st.push(node);
	inSt[node] = 1;
	for(auto c : adj[node]) 
    {
		if(!(~ID[c])) 
        {
			tarjan(c);
			mnID[node] = min(mnID[node], mnID[c]);
		}
		if(inSt[c]) 
            mnID[node] = min(mnID[node], ID[c]);
	}
	if(ID[node] == mnID[node])
		while(pop(node, mnID[node]))
			continue;
	freq[mnID[node]]++;
	return mnID[node];
}
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	memset(ID, -1, sizeof ID);
	cin >> n >> m;
	for (int i = 0; i < m; i++) 
    {
		int u, v;
		cin >> u >> v;
		--u, --v;
		adj[u].push_back(v);
	}
	for (int i = 0; i < n; i++)
		if (!(~ID[i])) 
            tarjan(i);
	string blank = "";
	for (int i = 0; i < n; i++)
    {
		cout << blank << (freq[mnID[i]] > 1);
		blank = " ";
	}
}
