/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, st[300014], en[300014], per[300014], ans[300014];

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> st[i];
    for(int i = 0; i < n; i++)
        cin >> en[i];
    iota(per, per + n, 0);
    sort(per, per + n, [](int i, int j)
    {  
        return st[i] < st[j];  
    });
    int p = -1;
    for_each(per, per + n, [&p](int &i)
    {
        while(p != -1 && en[p] < en[i])
            p = ans[p];
        ans[i] = p;
        p = i;
    });
    for(int i = 0; i < n; i++)
        cout << ans[i] + 1 << ' ';
    cout << endl;
}
