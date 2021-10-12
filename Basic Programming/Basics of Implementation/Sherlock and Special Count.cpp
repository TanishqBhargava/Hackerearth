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
    int t;
    cin >> t;
    while(t--)
	  {
        int n, k;
        cin >> n >> k;
        if(k % 2 or k > (n * n / 2))
			      cout << "NO" << endl;
        else 
			      cout << "YES" << endl;
    }
    return 0;
}
