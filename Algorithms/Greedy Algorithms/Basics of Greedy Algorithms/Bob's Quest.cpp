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
		int n, x, y, c = 0, i = 0, j = 0;
		cin >> n >> x >> y;
		vector<int> a(n);
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		set<int> st;
		map<int, int> m;
		while(j < n) 
		{
			st.insert(a[j]);
			m[a[j]] += 1;
			while(st.size() > x) 
			{
				m[a[i]] -= 1;
				if(m[a[i]] == 0) 
					st.erase(a[i]);
				i += 1;
			}
			if(st.size() == x and st.find(y) != st.end()) 
				c = max(c, j - i + 1);
			j += 1;
		}
		cout << c << "\n";
	}
	return 0;  
}
