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
		int h[26] = {0}, f = 0;
      	string s, str;
      	cin >> s >> str;
      	for(int i = 0; i < s.size(); i++)
          	h[s[i] - 'a']++;
      	for(int i = 0; i < str.size(); i++)
      	{
          	if(h[str[i] - 'a'] != 0)
          	{
              	cout << "YES" << endl;
              	f = 1;
              	break;
          	}
      	}
      	if(f == 0)
        	cout << "NO" << endl;
    }
}
