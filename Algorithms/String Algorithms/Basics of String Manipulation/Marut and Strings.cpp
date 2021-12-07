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
	int	t, upper, lower;
	string s, tmp;
	cin >> t;
	if (t < 1 || t > 10)
	{
		cout << "Invalid Test";
		return (0);
	}
	while (t--)
	{
		cin >> s;
		tmp.clear();
		for (auto &i : s)
		{
			if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
				tmp += i;
		}
		if (tmp.empty() || s.size() > 100)
			cout << "Invalid Input";
		else 
		{
			upper = 0;
			for (auto &i : tmp)
			{
				if (i >= 'A' && i <= 'Z')
					upper++;
			}
			lower = tmp.size() - upper;
			cout << (lower > upper ? tmp.size()-lower : tmp.size()-upper);
		}
		cout << endl;
	}
	return (0);
}
