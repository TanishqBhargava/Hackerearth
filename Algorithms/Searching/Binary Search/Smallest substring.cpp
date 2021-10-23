/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int L = 0, R = 0, n, cnt = 0, ans = INT_MAX;
    set<char>s, s1;
    string S;
    cin >> S;
    for(int i = 0; i < S.length(); i++)
        s1.insert(S[i]);
    n = s1.size();
    int count[26]{0};
    for(;R < S.length(); R++)
    {
        count[S[R] - 'a']++;
        if(count[S[R] - 'a'] == 1)
            cnt++;
        if(cnt==n)
        {
            while(count[S[L] - 'a'] > 1) 
            {
                if(count[S[L] - 'a'] > 1)
                    count[S[L]-'a']--;
                L++;
            }
            ans = min(ans, R - L + 1);
            count[S[L]-'a']--;
            L++;
            cnt--;
        }
    }
    cout << ans << endl;
    return 0;
}
