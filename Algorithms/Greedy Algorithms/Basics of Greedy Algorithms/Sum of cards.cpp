/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, n, x;
	bool pr[200000];
    cin >> t;
    while(t--) 
	{
        cin >> n >> x;
        long long s = 0;
        for(int i = 0; i < n; ++i) 
		{
            int y;
            cin >> y;
            s += y;
        }
        cout << (abs(s) + x - 1) / x << endl;
    }
}
