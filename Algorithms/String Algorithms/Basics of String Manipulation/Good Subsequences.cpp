/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        map<char, long long int>m;
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        long long ans = 1;
        for(auto &it : m)
			ans = ((ans % 1000000007) * (it.second % 1000000007)) % 1000000007;
        cout << ans << endl;
    }
    return 0;
}
