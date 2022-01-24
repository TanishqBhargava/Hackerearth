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
	int tc, n ,m;
    cin >> tc;
    while(tc--) 
	{
        cin >> n >> m;
        int b = 0;
        map<int, int>ans;
        for(int i = 0; i < m; i++) 
		{
            int x, y;
            cin >> x >> y;
            if( x == y) 
			{
                b = 1;
                break;
            }
			else if(x > n and x > y) 
			{
                if((x - y) > n) 
					b = 1;
            }
        }
        cout << ((b == 0)? "YES" : "NO") << endl;
    }
    return 0;
}
