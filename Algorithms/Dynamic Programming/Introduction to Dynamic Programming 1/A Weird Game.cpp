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
    long long int t; 
	cin >> t; 
	while(t--)
    {
        string s, t;
        cin >> s >> t;
        s = " " + s;
        t = " " + t;
        long long int n1 = s.size(), n2 = t.size();
        long long int l[n1 + 1], r[n1 + 1], i = 1, j = 1, cnt = 0;
        l[0] = 0;
        r[n1] = 0;
        while(i < n1)
        {
            l[i] = l[i - 1];
            if(j < n2 && s[i] == t[j])
            {
                l[i]++;
                ++j;
            }
            ++i;
        }
        i = n1 - 1;
        j = n2 - 1;
        while(i >= 1)
        {
            r[i] = r[i + 1];
            if(j >= 1 && s[i] == t[j])
            {
                r[i]++;
                --j;
            }
            --i;
        }
        i = n1 - 1;
        j = n1 - 1;
        while(i >= 1)
        {
            while(j >= 1 && (l[j - 1] + r[i + 1] >= t.size() - 1))
                --j;
            if(j <= i)
            cnt += (i - j);
            --i;
        }
        cout << cnt << endl;
    }
}
