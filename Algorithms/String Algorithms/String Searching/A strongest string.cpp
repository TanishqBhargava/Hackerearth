/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.precision(12);
    long t = 1;
    cin >> t;
    while(t--)
    {
        long long n;
        string s;
        cin >> n >> s;
        stack<char> st;
        vector<bool> vis(26, 0);
        for(long i = 0; i < n; ++i) 
        {
            if(vis[s[i] - 'a'])
                continue;
            else 
            {
                while(!st.empty() && st.top() < s[i]) 
                {
                    vis[st.top() - 'a'] = 0;
                    st.pop();
                }
                st.push(s[i]);
                vis[st.top() - 'a'] = 1;
            }
        }
        string res;
        while(!st.empty()) 
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}
