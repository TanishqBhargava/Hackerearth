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
	string s;
	cin >> t;
	for(int z = 1; z <= t; z++)
	{
    	cin >> s;
    	vector<int>a(3,0);
    	for(int i = 0; i < s.length(); i++)
            a[s[i] - '0']++;
    	sort(a.begin(), a.end());
    	if(a[2] - a[0] > 1)
    		cout << 0 << endl;
    	else if(a[2] == a[0])
    		cout << 6 << endl;
    	else
    		cout << 2 << endl;
	}
	return 0;
}
