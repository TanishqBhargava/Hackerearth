/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int solution (int n, string s) 
{
    int mx = 0, cnt = 0;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == '1') 
            cnt++;
        else 
            cnt = 0;
        mx = max(mx, cnt);
    }
    mx = max(mx, cnt);
    return mx;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int out_;
        out_ = solution(N, S);
        cout << out_;
        cout << "\n";
    }
}
