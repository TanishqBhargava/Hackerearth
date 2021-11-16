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
	int t, n, b, g;
	cin >> t;
	while(t--)
	{
		cin >> n >> b >> g;
		if(abs(g - b) > 1)
			cout << "Little Jhool wins!" << endl;
		else 
			cout << "The teacher wins!" << endl;
	}
}
