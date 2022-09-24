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
	int n, t, x, y, dx, dy, dem;
	char ch;
	vector<int> d[52], Time[2002], Time1[2002];
	bool chon[52];
	cin >> t;
	for(int tt = 1; tt <= t; tt++)
	{
		cin >> n;
		for(int i = 0; i < n; i++)
			d[i].clear();
		for(int i = 0; i < n; i++)
		{
			cin >> x >> y >> ch;
			if(ch == 'E') 
			{
				dx = 1; 
				dy = 0;
			}
			if(ch == 'W') 
			{
				dx = -1;
				dy = 0;
			}
			if(ch == 'N') 
			{
				dx = 0;
				dy = 1;
			}
			if(ch == 'S') 
			{
				dx = 0;
				dy = -1;
			}
			d[i].push_back(x);
			d[i].push_back(y);
			d[i].push_back(dx);
			d[i].push_back(dy);
		}
		sort(d, d + n);
		for(int i = 0; i < 2001; i++)
		{
			Time[i].clear();
			Time1[i].clear();
		}
		for(int i = 0; i < n; i++)
			for(int j = i + 1; j < n; j++)
			{
				int u = d[j][0] - d[i][0], v = d[j][1] - d[i][1];
				if(v < 0)
					v = -v;
				if(u < 0)
					u = -u;
				if(u == 0)
				{
					bool kt = false;
					if(d[i][1] > d[j][1] && d[i][3] == -1 && d[j][3] == 1) 
						kt = true;
					if(d[i][1] < d[j][1] && d[i][3] == 1 && d[j][3] == -1) 
						kt = true;
					if(kt)
					{
						int k = v / 2;
						if(2 * k == v)
						{
							Time[k].push_back(i);
							Time[k].push_back(j);
						}
						else
						{
							Time1[k].push_back(i);
							Time1[k].push_back(j);
						}
					}
				}
				if(v == 0)
				{
					bool kt = false;
					if(d[i][0] > d[j][0] && d[i][2] == -1 && d[j][2] == 1) 
						kt = true;
					if(d[i][0] < d[j][0] && d[i][2] == 1 && d[j][2] == -1) 
						kt = true;
					if(kt)
					{
						int k = u / 2;
						if(2 * k == u)
						{
							Time[k].push_back(i);
							Time[k].push_back(j);
						}
						else
						{
							Time1[k].push_back(i);
							Time1[k].push_back(j);
						}
					}
				}
				if(u == v)
				{
					int k = u;
					if(d[i][0] + k * d[i][2] == d[j][0] + k * d[j][2])
						if(d[i][1] + k * d[i][3] == d[j][1] + k * d[j][3])
						{
							Time[k].push_back(i);
							Time[k].push_back(j);
						}
				}
			}
		for(int i = 0; i < n; i++)
			chon[i] = true;
		for(int i = 0; i < 2001; i++)
		{
			if(Time[i].size() > 0)
			{
				vector<int> a;
				a.clear();
				for(int j = 0; j < Time[i].size(); j++)
					if(j % 2 == 0)
						if(chon[Time[i][j]] == true && chon[Time[i][j + 1]] == true)
						{
							a.push_back(Time[i][j]);
							a.push_back(Time[i][j + 1]);
						}
				for(int k = 0; k < a.size(); k++)
					chon[a[k]] = false;	
			}
			if(Time1[i].size() > 0)
			{
				vector<int> a;
				a.clear();
				for(int j = 0; j < Time1[i].size(); j++)
					if(j % 2 == 0)
						if(chon[Time1[i][j]] == true && chon[Time1[i][j + 1]] == true)
						{
							a.push_back(Time1[i][j]);
							a.push_back(Time1[i][j + 1]);
						}
				for(int k = 0; k < a.size(); k++)
					chon[a[k]] = false;	
			}
		}
		dem = 0;
		for(int i = 0; i < n; i++)
			if(chon[i])
				dem++;
		cout << dem << "\n";
	}
	return 0;
}
