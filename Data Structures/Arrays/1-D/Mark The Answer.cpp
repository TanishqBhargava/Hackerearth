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
	int n, x, a = 0, toughQ = 0, num;
	cin >> n >> x;
	while(n--)
	{
		cin >> num;
		if(num > x)
			toughQ++;
		if(num <= x)
			a++;
		if(toughQ >= 2)
			break;
	}
	cout << a << endl;
}
