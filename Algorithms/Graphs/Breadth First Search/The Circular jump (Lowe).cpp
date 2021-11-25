/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, x, y;
		cin >> n >> x >> y;
		x--,y--;
		long long int num[n + 1];
		for(int i = 0; i < n; i++)
			cin >> num[i];
		queue<int>q;
		q.push(x);
		long long int level[n + 1] = {0};
		for(int i = 0; i < n; i++)
			level[i] = 1000000000000000000;
			level[x] = 0;
		while(!q.empty())
		{
			int p = q.front();
			q.pop();
			num[p] %= n;
			int x1 = (p - num[p] + n) % n, y1 =(p + num[p]) % n;
			if(level[x1] > level[p] + 1)
			{
				level[x1] = level[p] + 1;
				q.push(x1);
			}
			if(level[y1] > level[p] + 1)
			{
				level[y1] = level[p] + 1;
				q.push(y1);
			}
		}
		if(level[y] == 1000000000000000000)
			cout << "-1" << endl;
		else
			cout << level[y] << endl;
	}
}
