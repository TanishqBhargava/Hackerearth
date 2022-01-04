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
	int t;
	long long int n, x;
	cin >> t;
	while(t--)
	{
		cin >> n;
		x = n * (n - 1) / 2;
		x /= n;
		long long int y = 0, z = (n * ((x * x) % 1000000007)) % 1000000007;
		y = (((n * (n - 1)) % 1000000007 * (2 * n - 1)) % 1000000007 * 166666668) % 1000000007;
		cout << z << " " << y << endl;
	}
	return 0;
}
