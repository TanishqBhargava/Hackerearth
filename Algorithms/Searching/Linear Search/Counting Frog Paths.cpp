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
	  int x, y, s, t, count = 0;
    cin >> x >> y >> s >> t;
    for(int i = x; i <= x + s; i++)
    {
        for(int j = y; j <= y + s; j++)
        {
            if(i + j <= t)
				        count++;
        }
    }
    cout << count << endl;
}
