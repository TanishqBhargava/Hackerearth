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
    long long int t, x, y, a, b;
    cin >> t;
    while(t--) 
	{
        cin >> x >> y >> a >> b;
        cout << (x * y == a + b ? "Yes\n" : "No\n");
    }
    return 0;
}
