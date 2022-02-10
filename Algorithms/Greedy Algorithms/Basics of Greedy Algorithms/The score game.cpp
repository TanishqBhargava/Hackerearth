/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int x[100000], y[100000];

int main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) 
	{
        int n;
        cin >> n;
        long long alice = 0;
        for(int i = 0; i < n; ++i) 
		{
            cin >> x[i];
            alice += x[i];
        }
        for(int i = 0; i < n; ++i)
            cin >> y[i];
        int per[n];
        iota(per, per + n, 0);
        sort(per, per + n, [](int i, int j) 
		{ 
			return 2 * x[i] + y[i] > 2 * x[j] + y[j]; 
		});
        long long me = 0;
        int ans = 0;
        while(me <= alice) 
		{
            me += x[per[ans]] + y[per[ans]];
            alice -= x[per[ans++]];
        }
        cout << ans << endl;
    }
}
