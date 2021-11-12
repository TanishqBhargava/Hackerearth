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
	  int n, res = 0; 
	  cin >> n;
 	  string s, t; 
 	  cin >> s >> t;
	  for(long long i = 0; i < n; i++)
	  {
     	  int b= (t[i] - s[i]);
     	  if(b < 0)
     		    b += 26;
     	  res += b / 13 + b % 13;
  	}
 	  cout << res;
	  return 0;
}
