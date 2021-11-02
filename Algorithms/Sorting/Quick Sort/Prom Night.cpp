/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;  
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m; 
        int a[n], b[m];
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        for(int i = 0; i < m; ++i) 
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        int flag = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] > b[i]) {}
            else 
                flag++;
        }
        if(flag == 0) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
