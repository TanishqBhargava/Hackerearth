/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) 
	{
		int a, b;
		cin >> a >> b;
		int k = __gcd(a, b);
		cout << b / k << ' ' << a / k << "\n";
	}
}
