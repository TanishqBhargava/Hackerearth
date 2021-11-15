/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>   
using namespace std; 
 
struct comparetime
{
    bool operator()(pair<int, int> &a,pair<int, int> &b) 
	{
        return a.second > b.second;
	}
};
 
int main() 
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>> taxis;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comparetime> times;
    int i = 1; 
    while(i <= m) 
	{
        taxis.push(i);
        i++;
    }
    vector<pair<int, pair<int,int>>> inputs; 
    int a, b;
    for (int i = 1; i <= n; i++) 
	{
        cin >> a >> b;
        inputs.push_back({a, {i, b}});
    }
    int ans[n + 1];
    sort(inputs.begin(), inputs.end());
    for (int i = 0; i < inputs.size(); i++) 
	{
        while(times.size() && times.top().second <= inputs[i].first) 
		{
            taxis.push(times.top().first);
            times.pop();
        }
        if (taxis.empty()) 
		{ 
			ans[inputs[i].second.first] = -1; 
			continue;
		}
        ans[inputs[i].second.first] = taxis.top();
        times.push({taxis.top(), inputs[i].first + inputs[i].second.second});
        taxis.pop();
    }
    for (int i = 1; i <= n; i++) 
		cout << ans[i] << " ";
    return 0;
}
