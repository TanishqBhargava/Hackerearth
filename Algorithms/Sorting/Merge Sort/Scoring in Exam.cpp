/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long t[100001], scr[100001], s[100001];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, q;
	cin >> n >> q;
	for(int i = 0; i < n; i++) 
		cin >> t[i];
	for(int i = 0; i < n; i++) 
		cin >> scr[i];
	sort(t, t + n);
	s[n - 1] = t[n - 1];
	for(int i = n - 2; i >= 0; i--) 
		s[i] = t[i] + s[i + 1];
	for(int i = 0; i < q; i++) 
    {
		int k;
		cin >> k;
		cout << s[n - k] << endl;
	}
	return 0;
}
