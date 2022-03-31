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
	int t, n, a[4];
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 0; i < 4; ++i)
			cin >> a[i];
		sort(a, a + 4);
		cout << n / a[0] + bool(n % a[0]) + 3 << endl;
	}
    return 0;
}
