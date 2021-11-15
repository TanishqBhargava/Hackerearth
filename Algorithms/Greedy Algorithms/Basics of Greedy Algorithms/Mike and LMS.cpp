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
	  int n;
	  cin >> n;
	  string s;
	  cin >> s;
	  string mx = "";
	  for(int i = 0; i < s.length(); i++)
    	  mx = max(mx, s.substr(i));
	  cout << mx << endl;
    return 0;
}
