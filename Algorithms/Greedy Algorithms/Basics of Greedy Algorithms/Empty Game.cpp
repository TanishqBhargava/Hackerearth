/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using  namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   	int t = 1;
   	cin >> t;
   	while(t--) 
	{
      	int n, ans = 0;
      	cin >> n;
      	vector<int> a(n);
      	for(int i = 0; i < n; i++) 
         	cin >> a[i];
      	sort(a.begin(), a.end());
      	for(int i = 0; i < n; i++)
		{
         	if(i < n - 1 and a[i + 1] - a[i] <= 2 ) 
            	++i;
         	++ans;
        }
      	cout << ans;
      	cout << endl;
    }
    return 0;
}
