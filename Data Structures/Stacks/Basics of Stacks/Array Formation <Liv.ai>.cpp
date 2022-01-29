/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
bool p[1000001];
int a[1000001], n;
vector<int> q ,s;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	for(int i = 2; i <= 1000000; i++)
	{
		if(p[i] == 0)
		{
			for(int j = 2 * i; j <= 1000000; j += i)
				p[j] = 1;
		}
	}
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		assert(a[i] > 1);
		if(p[a[i]] == 0)
			q.push_back(a[i]);
		else
			s.push_back(a[i]);
	}
	reverse(s.begin() , s.end());
	for(int i: q)
		cout << i << " ";
	cout << endl;
	for(int i: s)
		cout << i << " ";
}
