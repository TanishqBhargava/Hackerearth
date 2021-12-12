/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int count = 0;
 
void check(string s,char a, int b)
{
    ::count = 0;
    int p = 0 , r = 0, ans = 0;
    while(p <= r && r < s.length())
    { 
        while(p <= r && r < s.length() && ans != b)
        {
            if(s[r] == a)
                ans++;
                r++;
        }
        if(ans < b)
        {
            cout << ::count << endl;
            return;
        }
        int left = 1, right = 1;
        while(p < s.length() && s[p] != a && p < r)
        {
            left++;
            p++;
        }
        while(r < s.length() && s[r] != a)
        {
            right++;
            r++;
        }
        ::count += (right*left);
        p++;
        ans--;
    }
    cout << ::count << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        char b;
        string s;
        cin >> a >> b;
        cin >> s;
        check(s,b,a);
    }
    return 0;
}
