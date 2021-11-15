/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int color[60], m;
 
int bad(int x, int i)
{
	if(x % color[i] != 0) 
        return 1;
	for(int j = i + 1; j <= m; ++j) 
    {
		if(x % color[j] == 0) 
            return 1;
	}
	return 0;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, i, j, ans = 0;
	cin >> n >> m;
	for(i = 1; i <= m; ++i) 
	    cin >> color[i];
	for(i = 0; i < n; ++i) 
    {
		cin >> j;
		++ans;
		while(bad(ans, j)) 
            ++ans;
	}
	cout << ans << endl;
	return 0;
}
