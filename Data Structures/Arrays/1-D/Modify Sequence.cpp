/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a, b;
    cin >> n >> a;
    for(int i = 0; i < n - 1; ++i) 
    { 
        cin >> b;
        if((a = b - a) < 0)
            break;
    }
    puts(a ? "NO" : "YES");
    return 0;
}
