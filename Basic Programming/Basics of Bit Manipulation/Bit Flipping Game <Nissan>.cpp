/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string n(1000000, '0');
    int t; 
    cin >> t; 
    while(t--)
    {
        string str; 
        cin >> str; 
        for(int i = 0; i < str.size(); ++i) 
        if(str[i] == '1') 
            n[i] = '1';
    }
    int res = count(n.begin(), n.end(), '1');
    (res & 1) ? cout << "A" << endl << res << endl : cout << "B" << endl << res << endl;
    return 0;
}
