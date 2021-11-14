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
	  long long int r, g, b;
    cin >> r >> g >> b;
    long long int cnt = min({r, g, b});
    r -= cnt;
    g -= cnt;
    b -= cnt;
    cnt += (r + g + b + 1) / 2;
    cout << cnt << endl;
}
