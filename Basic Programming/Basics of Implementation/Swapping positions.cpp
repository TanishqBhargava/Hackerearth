/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		int count = 0, swap = 0, c[26] = {0};
		cin >> n;
		char s[n + 1], t[n + 1];
		cin >> s >> t;
		for(int i = 0; i < n; i++)
		{
			if(s[i] != t[i])
			{
				c[s[i] - 'a']++;
				c[t[i] - 'a']++;
				count++;
            }
		}
		for(int i = 0; i < 26; i++)
		{
			if(c[i] % 2 <= 1)
				count = count - c[i] / 2;
				swap = swap + c[i] / 2;
        }
		cout << endl;
		if(count <= 1 && swap <= 2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
