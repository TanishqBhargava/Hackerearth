/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
map<int, long long int> m;
 
long long int coins(int n) 
{
	  if(n == 0) 
        return 0;
	  if(m.find(n) != m.end()) 
        return m[n];
 	  long long int ans = n;
	  ans = max(ans, coins(n / 2) + coins(n / 3) + coins(n / 4));
	  return m[n] = ans;
}
 
int main() 
{
		int n; 
		while(cin >> n) 
		    cout << coins(n) << endl;
	  return 0;
}
