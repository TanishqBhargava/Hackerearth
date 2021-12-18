/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n, m, sum, a[1002][2];

void sol()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
        a[i][0] = a[i][1] = -1;
    a[0][0] = 0;
    a[0][1] = -1;
    sum = 0;
    for(int i = 1; i <= n; i ++)
    {
        int v, p;
        cin >> v >> p;
        for(int j = min(m-p/2, sum); j >= 0; j --)
        {
            if(a[j][1] != -1 && j + p <= m)
                a[j + p][1] = max(a[j + p][1], a[j][1] + v);
            if(a[j][0] != -1)
            {
                if(j + p <= m)
                    a[j + p][0] = max(a[j + p][0], a[j][0] + v);
                a[j + p / 2][1] = max(a[j + p / 2][1], a[j][0] + v);
            }
        }
        sum = min(m, sum + p);
    }
    int ans =0 ;
    for(int i = 1; i <= m; i ++)
        ans = max(ans, max(a[i][0], a[i][1]));
    cout << ans << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int ntest = 1;
    cin >> ntest;
    while(ntest -- > 0)
        sol();
}
