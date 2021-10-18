/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    assert(n >= 1 && n <= 1000000);
    int ans = 0;
    while(n--) 
	  {
        int x;
        cin >> x;
        assert(x >= 1 && x <= 1000000000);
        ans |= x;
    }
    cout << ans << endl;
    return 0;
}
