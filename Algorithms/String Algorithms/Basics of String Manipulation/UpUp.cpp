/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	if(((int)s[0]) >= 97 && ((int)s[0]) <= 122)
		s[0] -= 32;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == ' ')
			{
				if(((int)s[i + 1]) >= 97 && ((int)s[i + 1]) <= 122)
					s[i + 1] -=  32;
			}
		}
	cout << s;
}
