/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
	cin >> s;
	int n = s.size(), cnt = 0;
	for (int i = 0; i < n; i++)
		cnt += s[i] == s[0];
	if (cnt == n)
	{
		cout << "0";
		return 0;
	}
	cnt = 0;
	for (int i = 0; i < n; i++)
		cnt += s[i] == s[n - i -1];
	if (cnt == n)
	{
		cout << n - 1;
		return 0;
	}
	cout << n;
	return 0;
}
