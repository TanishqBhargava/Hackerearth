/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
void getRes()
{
    long long n; 
    cin >> n;
    string s; 
    cin >> s;
    long long alpha[26] = {0}, ans = 0;
    for(int i = 0; i < n; i++)
    {
        long long c = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(s[i] == s[j])
                ans += c;
            c += alpha[s[j] - 'a'];
        }
        alpha[s[i] - 'a']++;
    }
    cout << ans << endl;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int testCases = 1;
    while(testCases-- > 0)
        getRes();
    return 0;
}
