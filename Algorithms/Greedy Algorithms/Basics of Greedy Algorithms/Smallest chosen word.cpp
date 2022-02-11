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
	string s1, s2, s3;
    cin >> s1 >> s2 >> s3 >> s1 >> s2 >> s3;
    string ans = s3;
    reverse(s2.begin(), s2.end());
    for(auto c : s2)
        ans = min(ans, c + ans);
    cout << s1 + ans << endl;
}
