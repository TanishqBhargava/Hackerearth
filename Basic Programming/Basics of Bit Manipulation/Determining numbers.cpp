/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 14;
int n;
bool mark[maxn];
 
int main()
{
    ios::sync_with_stdio(0), cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mark[x] ^= 1;
    }
    for(int i = 1; i < maxn; i++)
        if(mark[i])
            cout << i << ' ';
    cout << endl;
}
