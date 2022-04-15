/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
  	int t;
  	cin >> t;
  	while(t--)
	{
    	int n;
    	cin >> n;
    	long long res = 1;
    	for(int h = 1; h <= n; h++)
		{
      		res *= (2 * n - h + 1);
      		res /= h;
    	}
    	cout << res / (n + 1) << endl;
  	}
}
