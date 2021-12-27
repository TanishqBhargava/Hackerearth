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
	int T, N, total;
    string str;
    cin >> T;
	assert(T >= 1 && T <= 100000);
	while(T--)
	{
		cin >> str;
		N = str.length();
		assert( N >= 1 && N <= 100000);
		total += N;
		int ans = 0;
		for(int i = 0; i < N; i++)
		{
			assert(str[i] <= 'z' && str[i] >= 'a');
			ans = ans ^ (1 << (str[i]-'a')); 
		}
		puts(ans == 0 ? "1" : "-1");
	}	
	assert(total >= 1 && total <= 1000000);
	return 0;
}
