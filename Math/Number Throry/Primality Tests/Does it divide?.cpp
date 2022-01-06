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
	while(t--)
	{
		int n;
		cin >> n;
		n++;
		bool pr = 1;
		for(int i = 2; i * i <= n; i++)
			pr &= n % i != 0;
		cout << (n > 2 && pr ? "NO" : "YES") << endl;
	}
}
