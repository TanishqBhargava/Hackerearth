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
   		long long n, i, m, max1 = 0, max2 = 0, min1 = 1000000001, min2 = 1000000001, ans = 0;
   		cin >> n >> m;
   		for(i = 0; i < n; i++)
        {
      		long long temp;
           	cin >> temp;
      		(min1 > temp) ? min2 = min1, min1 = temp : min2 = min(min2, temp);
      		(max1 < temp) ? max2 = max1, max1 = temp : max2 = max(max2, temp);
        }
   		ans = ((max1 - min2 + max2 - min1) << 1) + (long double)(ceil(((long double)(min2 - min1 + max1 - max2)) * sqrt(2)));
   		cout << ans * m << endl;
	}
   	return 0;
}
