/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
const int nax = 1e5 + 5; // 100005
int par[100005], deg[100005];
int find(int a) 
{ 
    return a == par[a] ? a : par[a] = find(par[a]); 
}
 
void uni(int a, int b) 
{ 
    par[find(a)] = find(b); 
}
 
void te() 
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> w;
	while(m--) 
    {
		int a, b, cost;
		cin >> a >> b >> cost;
		if(a > b) 
            swap(a, b);
		w.push_back(vector<int>{cost, -a, -b});
	}
	sort(w.begin(), w.end());
	for(int i = 1; i <= n; ++i) 
    {
		par[i] = i;
		deg[i] = 0;
	}
	long long total = 0;
	for(vector<int> edge : w) 
    {
		int cost = edge[0], a = -edge[1], b = -edge[2];
		if(find(a) != find(b)) 
        {
			uni(a, b);
			++deg[a];
			++deg[b];
			total += cost;
		}
	}
	cout << total << endl;
	for(int i = 1; i <= n; ++i) 
        cout << deg[i] << " ";
	puts("");
}
 
int main() 
{
	int z;
	cin >> z;
	while(z--) 
        te();
	return 0;
}
