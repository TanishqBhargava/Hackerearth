/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t, e;
	cin >> t;
	while(t--)
	{
		cin >> e;
		set<int> s;
		for(int i = 1; i <= e; i++)
		{
			int sr, d;
			cin >> sr >> d;
			s.insert(sr);
			s.insert(d);
		}
		cout << s.size() << endl;
	}
}
