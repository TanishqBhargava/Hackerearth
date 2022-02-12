/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
        int n, x, y, ans = 1, cnt = 0;
        vector<pair<int, int>> a;
        cin >> n;
        for(int i = 0; i < n; i++) 
        {    
            cin >> x >> y; 
            a.push_back(make_pair(x, -1)); 
            a.push_back(make_pair(y, 1));
        }
        sort(a.begin(), a.end());
        for(auto i : a)
        {
            if(i.second == -1) 
                cnt--;
            else 
                cnt++;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
}
