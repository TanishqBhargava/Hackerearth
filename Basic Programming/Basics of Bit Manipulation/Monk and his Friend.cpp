/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; 
	  cin >> T; 
	  assert(T >= 1 && T <= 10000);
    for (int g = 0; g < T; g++)
	  {
        long long a, b; 
		    cin >> a >> b;
        assert(a >= 0 && a <= 1e16); 
        assert(b >= 0 && b <= 1e16);
        cout << __builtin_popcountll (a ^ b) << endl;
    }
    return 0;
}
