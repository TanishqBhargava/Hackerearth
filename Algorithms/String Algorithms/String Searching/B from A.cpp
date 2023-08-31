/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for(int tc = 1; tc <= T; tc++)
    {
		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		vector<int> v1(26, 0), v2(26, 0);
		for(auto i : a) 
			v1[i - 'a'] += 1;
		for(auto i : b) 
			v2[i - 'a'] += 1;
		int c = 1e18;
		for(int i = 0; i < 26; i++) 
		{
			if(v2[i] > 0) 
				c = min(c, v1[i] / v2[i]);
		}
		cout << c << "\n";
	}
	return 0;  
}
