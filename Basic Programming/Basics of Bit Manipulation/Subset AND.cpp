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
   		  long long z, n;
		    cin >> z >> n;
		    int a[n];
		    for(int i = 0; i < n; i++)
        {
			      cin >> a[i];
			      z &= a[i];
		    }
		    if(z)
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;
	  }
    return 0;	
}
