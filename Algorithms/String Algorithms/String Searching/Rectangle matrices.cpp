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
   	int t;
	cin >> t;
	long long x, y;
	while(t--)
	{
		cin >> x >> y;
		long long g = __gcd(x, y);
		if((g & (g - 1)) == 0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	} 	 
}
