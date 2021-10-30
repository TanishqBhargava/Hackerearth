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
    int test;
    cin >> test;
    while(test--)
    {
        int n, s, a, more = 0, less = 0;
        cin >> n >> s;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a > s)
                more++;
            else
                less++;
        }
        cout << abs(more - less) << endl;
    }
    return 0;
}
