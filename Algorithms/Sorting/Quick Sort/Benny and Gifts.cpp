/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    set<pair<int, int>>st;
    string s;
    cin >> s;
    int x = 0, y = 0, ans = 0;
    for(int i = 0; i <= s.size(); i++)
    {
        if(st.find({x, y}) != st.end())
            ans++;
        st.insert({x, y});
        if(s[i] == 'L')
            y--;
        if(s[i] == 'R')
            y++;
        if(s[i] == 'U')
            x--;
        if(s[i] == 'D')
            x++;
    }
    cout << ans << endl;
}
