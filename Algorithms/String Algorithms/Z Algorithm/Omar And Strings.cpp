/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int fail1[200010], fail2[200010], fail3[200010], freq[200010];
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, c, prefix = "", suffix = "", omeric = "";
    cin >> s;
    c = s;
    reverse(c.begin(), c.end());
    prefix = s + "#" + c;
    suffix = c + "#" + s;
    for(int i = 1, k = 0; i < prefix.size(); i++)
	{
        while(k > 0 && prefix[i] != prefix[k]) 
			k = fail1[k - 1];
        if(prefix[i] == prefix[k]) 
			k++;
        fail1[i] = k;
    }
    for(int i = 1, k = 0; i < suffix.size(); i++)
	{
        while(k > 0 && suffix[i] != suffix[k]) 
			k = fail2[k - 1];
        if(suffix[i] == suffix[k]) 
			k++;
        fail2[i] = k;
    }
    string res1 = s.substr(s.size() - fail2[suffix.size() - 1], fail2[suffix.size() - 1]), res2 = s.substr(0 , fail1[prefix.size() - 1]);
    omeric = res1 + res2;
    s = omeric;
    cout << omeric << endl;
    for(int i = 1, k = 0; i < s.size(); i++)
	{
        while(k > 0 && s[i] != s[k]) 
			k = fail3[k - 1];
        if(s[i] == s[k]) 
			k++;
        fail3[i] = k;
    }
    for(int i = 0; i < s.size(); i++) 
		freq[fail3[i]]++;
    for(int i = s.size() - 1; i > 0; i--) 
		freq[fail3[i - 1]] += freq[i];
    for(int i = s.size(); i > 0; i--) 
		freq[i]++;
    for(int i = 1; i <= s.size(); i++) 
		cout << freq[i] << " ";
    return 0;
}
