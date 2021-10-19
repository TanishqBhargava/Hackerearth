/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, s, i, j;
	  cin >> t;
    while(t--)
	  {
		    cin >> n; 
		    int a[n + 5];
        for(int i = 0; i < n; i++) 
			      cin >> a[i];
		    cin >> s;
        for(i = 0; i < (1<<n); i++)
		    {
            int x = 0;
            for(j = 0; j < n; j++)
			      {
                if(i & (1<<j)) 
					          x += a[j];
            }
            if(x == s) 
			      {
                cout << "YES" << endl; 
				        break;
            }
        }
        if(i == (1 << n)) 
			      cout << "NO" << endl; 
    }
    return 0;
}
