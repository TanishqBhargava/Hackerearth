/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<int, pair<int, int>> my_map;
	for(int i = 0; i < n; i++)
	{
    	int val;
    	for(int j = 0; j < m; j++)
    	{
        	cin >> val;
        	my_map[val] = make_pair(i, j);
    	}
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x;
    	cin >> x;
    	if(my_map.find(x) != my_map.end())
         	cout << my_map[x].first << " " << my_map[x].second << endl;
    	else
        	cout << "-1 -1" << endl;
	}
}
