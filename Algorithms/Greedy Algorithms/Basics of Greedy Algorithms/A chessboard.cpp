/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, x1, x2, y1, y2;
    cin >> t;
    while(t--)
	{
        cin >> x1 >> y1 >> x2 >> y2;
        int a = x1 - x2, b = y1 - y2;
        if(abs(a) > 1 || abs(b) > 1)
            cout << "DRAW" << endl;
        else if(x1 == x2 && y1 == y2)
            cout << "SECOND" << endl;
        else
            cout << "FIRST" << endl;
    }
    return 0;
}
