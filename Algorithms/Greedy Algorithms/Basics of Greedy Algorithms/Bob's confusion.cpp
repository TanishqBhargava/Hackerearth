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
    int t, c[3][3];
    cin >> t;
    while(t--) 
	{
        for(auto &i : c)
            for(int &j : i)
                cin >> j;
        bool ok = true;
        for(int i = 1; i < 3; ++i)
            for(int j = 1; j < 3; ++j)
                ok &= c[i][j] == c[0][j] + c[i][0] - c[0][0];
        cout << (ok ? "YES\n" : "NO\n");
    }
}
