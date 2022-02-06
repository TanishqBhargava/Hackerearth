/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int num;
	cin >> num;										
	for(int i = 0; i < num; ++i)
    {
		int n, k;
		cin >> n >> k;
		map<int, int>m;
		for(int j = 0; j < n; ++j)
        {
			string s;
			cin >> s;
			m[s.size()]++;
		}
		bool f = 0;
		for(auto q : m)
        {
			if(q.second % k != 0)
            {
				cout << "Not possible" << endl;
				f = 1;
				break;
			}
		}
		if(!f)
            cout << "Possible" << endl;
	}
}
