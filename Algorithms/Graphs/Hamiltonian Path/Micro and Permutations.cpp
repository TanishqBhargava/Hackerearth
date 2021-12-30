/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, mat[40][40] = {0};
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		mat[x][y] = mat[y][x] = 1;
	}
	int cnt = 0;
	vector<int> v;
	for(int i = 1; i <= n; i++)
		v.push_back(i);
	while(true)
	{
		int i;
		for(i = 1; i < v.size(); i++)
			if(!mat[v[i]][v[i - 1]])
				break;
		if(i == v.size())
			cnt++;		
		if(!next_permutation(v.begin(), v.end()))
			break;	
	}	
	cout << cnt << endl;
	return 0;
}
