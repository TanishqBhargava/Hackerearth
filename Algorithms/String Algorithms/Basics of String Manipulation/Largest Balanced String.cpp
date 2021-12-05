/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
    {
		int cnt[200] = {0};
		string str;
		cin >> str;
		for(int i = 0; i < str.size(); i++)
			cnt[str[i]]++;
		long long ans = 0;
		ans += 2 * min(cnt['('], cnt[')']);
		ans += 2 * min(cnt['['], cnt[']']);
		ans += 2 * min(cnt['{'], cnt['}']);
		cout << ans << endl;
	}
	return 0;
}
