/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	long long t = 1;
	while(t--)
	{
		string str;
		long long q;
		cin >> q;
		cin >> str;
		long long n = str.length(), i, j;
		vector<vector<long long>>cnt(26, vector<long long>(n + 1, 0));
		for(i = 0; i < n; i++)
			cnt[str[i] - 'a'][i+1]++;
		for(j = 1; j <= n; j++)
			for(i = 0; i < 26; i++)
				cnt[i][j] += cnt[i][j - 1];
		while(q--)
		{
			long long a, b, val = 0;
			cin >> a >> b;
			a--;
			for(i = 0; i < 26; i++)
			val += (cnt[i][b] - cnt[i][a]) % 2;
			cout << (val >  1 ? "Impossible" : "Possible") << endl;
		}
	}
}
