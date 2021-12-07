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
	string s;
	while(getline(cin, s))
	{
		int fg = 1;
		for(int i = 0; s[i] != '\0'; i++)
		{
			if(s[i] == '/' && s[i + 1] == '/')
				fg = 0;
			if(fg)
			{
				if(s[i] == '-' && s[i + 1] == '>')
				{
					cout << ".";
					i++;
				}
				else
					cout << s[i];
			}
			else
				cout << s[i];
		}
		cout << endl;
	}
}
