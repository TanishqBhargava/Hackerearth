/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	  int t;
	  cin >> t;
	  while(t--)
    {
        int n, m;
		    cin >> n >> m;
		    long a[m];
		    for(int i = 0; i < m; i++)
			      cin >> a[i];
		    sort(a, a + m);
		    long total = 0, count = 0;
		    for(int i = 0; i < m; i++)
        {
			      total += a[i];
			      if(total <= n) 
                count++;
		    }
		    cout << count << endl;
    }
    return 0;
}
