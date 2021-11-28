/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    cin.ignore(13,'\n');
    vector<int> b;
    for(int i = 1, j; i <= n; ++i)
    {
        cin >> j;
        if(j)
            b.push_back(i);
    }
    if(b.empty())
        cout << n;
    else
    {
        int l = b.size();
        int cnt = max(b[0], l - b[l - 1] + 1);
        for(int i = 1, d; i < l; ++i)
        {
            d=b[i] - b[i - 1];
            if(d > 1)
                ++d;
            if(d > cnt)
                cnt = d;
        }
        cout << cnt;
    }
    return 0;
}
