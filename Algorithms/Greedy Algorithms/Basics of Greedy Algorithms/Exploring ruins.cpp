/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    char s[55];
    cin >> s;
    int n = strlen(s), i = 0;
    while(i < n)
	  {
    	  if(s[i] == '?')
		    {
    		    if(s[i - 1] != 'a' && s[i + 1] != 'a')
    			      s[i] ='a';
    		    else 
				        s[i] = 'b';
		    }
		    i++;
	  }
	  for(int i = 0; i < n; i++)
		    cout << s[i];
}
