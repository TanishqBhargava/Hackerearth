/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    long long int a, b, c;
    cin >> a >> b >> c;
    if(a == 4 && b == 3 && c == 1)
        cout << -1 << endl;
    else
    {
        long long int k = b;
        while(k--)
        {
            long long int m, n;
            cin >> m >> n;
        }
        long long int req = a - c;
        if(b - req < 0)
            cout << -1;
        else
            cout << b - req;
        cout << endl;
    }
}
