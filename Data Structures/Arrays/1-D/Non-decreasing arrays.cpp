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
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long last = 1;
        for(int i = 0; i < n; ++i) 
        {
            int a;
            cin >> a;
            last = (last + a - 1) / a * a;
            cout << last << ' ';
        }
        cout << endl;
    }
}
