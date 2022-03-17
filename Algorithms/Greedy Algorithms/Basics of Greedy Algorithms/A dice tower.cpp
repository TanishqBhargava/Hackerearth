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
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n, i, j;
		cin >> n;
		if(n == 21)
		{
			cout << 1 << endl;
			continue;
		}
		if(n < 30)
		{
			cout << -1 << endl;
			continue;
		}
		if(n % 14 >= 2 && n % 14 <= 12)
		{
			cout << (n / 14) << endl;
			continue;
		}
		cout << -1 << endl;
	}
}
