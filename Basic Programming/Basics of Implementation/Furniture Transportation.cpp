/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int a, b, c, f = 0, e = 0;
    cin >> a >> b >> c;
    int d[a];
    for(int i = 0; i < a; i++)
	      cin >> d[i];
    for(int i = 0; i < a; i++)
    {
        if(d[i] <= b)
	        e++;
        else
	        e = 0;
        if(e == c)
        {
	          f++;
	          if(d[i + 1] <= b)
		            e -= 1;
	          else
		            e = 0;
        }
    }
    cout << f;
}
