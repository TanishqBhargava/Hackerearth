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
    int n, res = 0, a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        res ^= a;
    }
    (res) ? cout << 1 : cout << -1;
}
