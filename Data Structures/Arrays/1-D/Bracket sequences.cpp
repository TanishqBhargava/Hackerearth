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
	cin >> s;
    int n = s.length(), ans = 0;
    for(int i = 0; i < n; i++)
	{
        int c = 0; 
        if(s[i] == '(')
		{ 
            for(int j = i; j < i + n; j++)
			{
                if(s[j % n] == '(')
                	c++;
                else
                	c--;  
                if(c < 0) 
                	break;
            }
            if(c == 0) 
            	ans++;
        }
    }
    cout << ans;
}
