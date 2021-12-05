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
	string a, b;
	cin >> a >> b;
	int ans = 0;
	for(int i = 0; i < a.size(); i++)
		if(a[i] != b[i])
			ans++;
		if(ans % 2 != 0)
			cout << "-1";
		else
			cout << ans / 2;
	return 0;
}
