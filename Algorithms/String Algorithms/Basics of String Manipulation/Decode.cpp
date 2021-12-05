/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

string decode (string s) 
{
    string res = "";
    int k = 0;
    if(s.length() % 2 == 0) 
        k = 1;
    for(int i = 1; i < s.length(); i+=2)
        res += s[s.length() - 1 - i];
    for(int i = k; i < s.length(); i+=2)
        res += s[i];
    return res;
}
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int testCases; 
    cin >> testCases;
    while(testCases-->0)
    {
        string s; 
        cin >> s;
        cout << decode(s) << endl;
    }
    return 0;
}
