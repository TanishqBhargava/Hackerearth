/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    short t;
    cin >> t;
    while (t--)
    {
        int n, val = 0;
        cin >> n;
        char s[n];
        cin >> s;
        while (n--)
            if (s[n] == '1')
                val++;
        cout << val << endl;
    }
    return 0;
}
