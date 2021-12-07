/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long t;
    cin >> t;
    while(t--)
    {
        unordered_map<char, long long> gg;
        long long ac, bc, ok = 1;
        string s;
        cin.ignore();
        getline(cin, s);
        cin >> ac >> bc;
        char ww = (ac <= bc? 'a' : 'b');
        for(long long i = 0; i < (s.size()>>1); i++)
        {
            if(s[i] != '/' && s[s.size() - 1 - i] == '/') 
                gg[s[i]]++;
            else if(s[i] == '/' && s[s.size() - 1 - i] != '/') 
                gg[s[s.size() - 1 - i]]++;
            else if(s[i] == '/' && s[s.size() - 1 - i] == '/') 
                gg[ww] += 2;
            else if(s[i] == s[s.size() - 1 - i]) 
                continue;
            else
            {
                cout << "-1" << endl;
                ok = 0;
                break;
            }
        }
        if(ok) 
            cout << gg['a'] * ac + gg['b'] * bc << endl;
    }
}
