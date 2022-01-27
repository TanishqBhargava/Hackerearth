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
	int i, j, k, l, m, n, o, p, q;
	cin >> m;
	while(m--)
	{
		cin >> o >> p;
		string a[o];
		for(i = 0; i < o; i++)
			cin >> a[i];
		string s1;
		cin >> s1;
		l = 0;
		for(i = 0; i < s1.length(); i++)
		{
			string s2 = s1.substr(i, 1);
			size_t fin = a[l].find(s2);
			if(fin != string::npos)
			{
				a[l][fin] = '0';
				l = (l + 1) % o;
			}
			else
			{
				cout << "No" << endl;
				goto g;
			}
		}
		cout << "Yes" << endl;
		g:
		q = 0;
	}
	return 0;
}
