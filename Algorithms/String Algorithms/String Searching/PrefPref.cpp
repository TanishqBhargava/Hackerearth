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
 	string s, t; 
	cin >> s >> t;
	int j = 0;
	for(int i = 0; i < t.length(); i++)
	{
		if(t[i] == s[j])
			j++;
		if(j == s.length())
			break;
	}
	cout << j;
	return 0;
}
