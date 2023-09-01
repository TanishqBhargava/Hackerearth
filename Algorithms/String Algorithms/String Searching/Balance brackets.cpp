/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i = 1 ; i <= k - 1 ; i++)
		cout << i << " " << 0 << endl;
	cout << n << " " << 0 << endl;
	for(int i = k ; i >= 1 ; i--)
		cout << i << " ";
	cout << "\n";
}
