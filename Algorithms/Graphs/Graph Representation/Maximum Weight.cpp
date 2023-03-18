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
	int n, m, p, q;
	cin >> n >> m;
	int w[n], ss[n];
	for(int i = 0; i < n; i++)
		cin >> w[i];
	set<int> s;
	for(int i = 0; i < m; i++)
	{
		cin >> p >> q;
		if(w[p - 1] < w[q - 1])
        {
			if(ss[q - 1] == 1)
				continue;
			else
            {
				s.insert(p);
				ss[p - 1] = 1;
			}
		}
		else
        {
			if(ss[p - 1] == 1)
				continue;
			else
            {
				s.insert(q);
				ss[q - 1] = 1;
			}
		}
	}
	cout << s.size() << endl;
	for(auto i : s)
		cout << i << " ";
}
