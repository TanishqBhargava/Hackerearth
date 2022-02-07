/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1; 
    cin >> T;
    while(T--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2;
        for(int i = 0; i < s1.size(); i++)
            s3.push_back(s1[s1.size() - 1 - i]);
        int a = 0;
        if(s2.find(s1) > s2.size() - 1) 
            a++;
        if(s2.find(s3) > s2.size() - 1) 
            a++;
        if(a == 2) 
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
