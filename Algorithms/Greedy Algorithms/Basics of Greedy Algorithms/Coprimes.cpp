/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b)
{
  	if(b == 0)
    	  return a;
  	return gcd(b, a % b);
}

int main()
{
  	int n;
  	cin >> n;
  	for(int h = n - 2; h > 0; h--)
  	{
    	  if(gcd(h, n) == 1)
		    {
      		  cout << h;
      		  break;
    	  }
  	}
}
