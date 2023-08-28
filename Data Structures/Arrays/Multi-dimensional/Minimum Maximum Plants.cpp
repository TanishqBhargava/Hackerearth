/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, b, mx = 0, mn = 0;
	cin >> n >> m >> b;
    vector<int> bro[2500];
	for(int i = 0; i < b; i++)
    {
		int x, y;
		cin >> x >> y;
		bro[x].push_back(y);
	}
	for(int i = 0; i < n; i++)
		bro[i].push_back(m);
	for(int i = 0; i < n; i++)
		sort(bro[i].begin(), bro[i].end());
	for(int i = 0; i < n; i++)
    {
		int pos = 0;
		for(int j = 0; j < bro[i].size(); j++)
        {
			int ln = bro[i][j] - pos;
			mx += ((ln + 1) / 2);
			mn += (ln == 1 ? 1 : (ln + 2) / 3);
			pos = bro[i][j] + 1;		
		}
	}
	cout << mx << " " << mn << "\n";	
	return 0;
}
