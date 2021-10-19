/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; 
    cin >> t; 
    while(t--)
    {
        int n; 
        long long odd = 0, even = 0; 
        cin >> n; 
        while(n--)
        {
            int x; 
            cin >> x; 
            (x & 1) ? (odd++) : (even++);
        }
        cout << odd * even << endl;
    }
    return 0;
}
