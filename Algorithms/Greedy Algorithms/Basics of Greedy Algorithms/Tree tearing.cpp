/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int k, n;
vector<int>v[10100];

pair<int, int>solve(int x) 
{
    pair<int, int>res = make_pair(0, 0);
    for(int i = 0; i < v[x].size(); i++) 
	{
        pair<int, int> cur = solve(v[x][i]);
        res.first += cur.first;
        res.second += cur.second;
    }
    res.second++;
    if(res.second >= k) 
	{
        res.first++;
        res.second = 0;
    }
    return res;
}

int main() 
{
	cin >> k >> n;
    for(int i = 2; i <= n; i++) 
	{
        int x;
        cin >> x;
        v[x].push_back(i);
    }
    pair<int, int>res = solve(1);
    cout << res.first << endl;
    return 0;
}
