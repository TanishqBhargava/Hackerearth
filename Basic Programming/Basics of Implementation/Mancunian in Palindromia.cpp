/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  	int res = 0, n , l;
  	cin >> n >> l;
  	assert(n >= 1 && n <= 10);
  	for(int test = 0; test < n; test++)
  	{
    	  string s;
    	  cin >> s;
    	  assert((int)s.size() >= 1 && (int)s.size() <= l);
    	  bool ok = 0;
    	  int n = (int)s.size();
    	  for(int l1 = 0; l1 < n; l1++)
      		  for(int r1 = l1; r1 < n; r1++)
        		    for(int l2 = r1 + 1; l2 < n; l2++)
          			    for(int r2 = l2; r2 < n; r2++)
          			    {
            			      string t = s;
            			      reverse(t.begin() + l1 , t.begin() + r1 + 1);
            			      reverse(t.begin() + l2 , t.begin() + r2 + 1);
            			      string tt = t;
            			      reverse(tt.begin(), tt.end());
            			      if(tt == t)
              				      ok = 1;
          			    }
	      res += ok;
  	}   
    cout << res << endl;
    return 0;
}
