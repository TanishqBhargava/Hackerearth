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
    int t;
    cin >> t;
    assert(t <= 10);
    while(t--)
    {
        string s;
        cin >> s;
        int c = 0;
        assert(s.length() <= 100000);
        string d = "YES";
        for(auto it : s)
        {
            if(it == '.')
                c++;
            else if(c && it != '0')
                d = "NO";
        }
        cout << d << endl;
    }
}
