/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	int t, n;
  	cin >> t;
  	while (t--) 
	{
    	cin >> n;
    	if (n == 1) 
			cout << "1" << endl;
    	else if (n == 2)
      		cout << "4" << endl;
    	else if (n == 3)
      		cout << "10" << endl;
    	else if (n == 4)
      		cout << "18" << endl;
    	else
      		cout << (n - 2) * 9 << endl;
  	}
}
