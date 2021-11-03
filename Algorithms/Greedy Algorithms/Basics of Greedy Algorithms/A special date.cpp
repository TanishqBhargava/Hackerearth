/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
set<string> s;
 
void calc()
{
    for(long long day = 1; day < 31; day++)
    {
        for(long long month = 1; month < 13; month++)
        {
            string d = to_string(day), m = to_string(month);
            if(d.length() != 2)
                d = "0" + d;
            if(m.length() != 2)
                m = "0" + m;
            string year1 = m, year2 = d;
            reverse((year1).begin(), (year1).end());
            reverse((year2).begin(), (year2).end());
            string year = year1 + year2;
            if(year >= "0001" and year <= "9999")
                s.insert(year + m + d);
        }
    }
}
 
void Saraff()
{
    string D;
    cin >> D;
    string str = D.substr(4) + D.substr(2, 2) + D.substr(0, 2);
    auto itr = s.lower_bound(str);
    if(itr == s.begin())
        cout << "-1" << endl;
    else
    {
        itr--;
        string ans = *itr;
        cout << ans.substr(6) << ans.substr(4, 2) << ans.substr(0, 4) << endl;
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    calc();
    long long test = 1;
    cin >> test;
    for(long long t = 1; t <= test; t++)
        Saraff();
}
