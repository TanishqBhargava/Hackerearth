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
    int m, n, t, i, j;
	  cin >> t;
	  for(j = 0; j < t; j++)
	  {
		    int sum1 = 0, sum2 = 0;
		    cin >> n >> m;
		    int a[n];
		    for(i = 0; i < n; i++)
		        cin >> a[i];
		    sort(a, a + n);
		    for(i = 0; i < n - m; i++)
		        sum1 += a[i];
		    sort(a, a + n, greater<int>());
		    for(i = 0; i < n - m; i++)
            sum2 += a[i];
		    cout << sum2 - sum1 << endl;
	  }
}
