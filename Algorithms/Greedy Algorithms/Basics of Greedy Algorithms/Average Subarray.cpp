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
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n], curr = 0, res = 0;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			if(a[i] == 0)
				curr = 0;
			else
			{
				curr++;
				if(curr == k)
				{
					res++;
					curr = 0;
				}
			}
		}
		cout << res << endl;
	}
}
