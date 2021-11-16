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
	int T = 1;  
	cin >> T;
   	while(T--) 
	{
    	int n; 
		cin >> n;
 		vector<int> v(n);
 		for(int i = 0; i < n; i++) 
		 	cin >> v[i];
 		int i = 0, j = n - 1;
 		long long l = v[i], r = 2 * v[j];
 		while(j - i > 1)
		{
  			if(l <= r) 
			{
   				l += v[i + 1];
   				i++;
  			}
  			else
			{
   				r += 2 * v[j - 1];
   				j--;
  			}
 		}
 		cout << i + 1 << ' ' << n - (i + 1) << endl;
   	}
   	return 0;
}
