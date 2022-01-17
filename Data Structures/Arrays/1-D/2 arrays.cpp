/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, m, c[2], s[2];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for(int k = 0; k < 2; k++)
		for(int i = 0; i < n; i++)
        {
			int x;
			cin >> x;
			if(x == -1)
				c[k]++;
			else
				s[k] += x;
		}
	if(c[0] && c[1])
		return cout << "Infinite" << endl, 0;
	if(!c[0])
    {
		swap(c[0], c[1]);
		swap(s[0], s[1]);
	}
	if(s[0] > s[1])
		cout << "0" << endl;
	else if(c[0] == 1)
		cout << 1 << endl;
	else
		cout << s[1] - s[0] + 1 << endl;
}
