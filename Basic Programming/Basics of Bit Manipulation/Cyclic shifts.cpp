/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int t, m;
    unsigned short x;
    char c;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
	      cin >> x >> m >> c;
	      if(m > 16)
            m %= 16;
	      if(c == 'L')
        {
		        for(int z = 0; z < m; z++)
            {
			          if((x & (0x8000)) == 0)
				            x<<=1;
			          else if((x & (0x8000)) != 0)
                {
				            x<<=1;
				            x = (x|1);
			          }
		        }
	      }
	      else if(c == 'R')
        {
		        for(int z = 0; z < m; z++)
            {
			          if((x & (0x1)) == 0)
				            x>>=1;
			          else if((x & (0x1)) != 0)
                {
				            x>>=1;
				            x=(x|0x8000);
			          }
		        }
	      } 
	      cout << x << endl;
    }
	  return 0;
}
