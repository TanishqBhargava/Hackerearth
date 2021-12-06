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
		string str;
		cin >> str;
		set<char>s;
		for(int i = 0; i < str.length(); ++i)
			s.insert(str[i]);
		if(s.size() >= 4 || str.size() >= 10)
			cout << "YES" << endl;
		else if(s.size() == 3 && str.size() >= 5)
			cout << "YES" << endl;
		else if(s.size() == 2 && str.size() >= 7)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;	
}
