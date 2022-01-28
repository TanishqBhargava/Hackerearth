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
	int t;
	cin >> t;
	while(t--)
	{
		int n, f = 0;
		cin >> n;
		string arr[n] = {""}, arr1[n] = {""};
		for(int i = 0; i < n; i++)
				cin >> arr[i];
		string str;
		for(int i = 0; i < n; i++)
		{
			str = "";
			for(int j = 0; j < n; j++)
			str.push_back(arr[j][i]);
			arr1[i] = str;
		}
		for(int i = 0, j = n - 1; i < n / 2; i++, j--)
		{
			if(!(arr[i] == arr[j]) || !(arr1[i] == arr1[j]))
			{
				f = 1;
				break;
			}
		}
		if(f == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
