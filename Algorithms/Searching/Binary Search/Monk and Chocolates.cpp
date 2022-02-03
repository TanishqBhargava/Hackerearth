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
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, i, mx, nw, fi, fii, lii, ip, ln;
		vector<int> temp, vl;
		cin >> n >> m;
		string s;
		cin >> s;
        unordered_map <char, vector <int>> e;
        for(i = 0; i < n; i++) 
            e[s[i]].push_back (i);
        for(i = 0; i < (int)e.size(); i++) 
        {
            temp = {};
            for(ip = 0; ip < (int)e[i].size(); ip++)
                temp.push_back (e[i][ip] - ip);
            e[i] = temp;
        }
        mx = 0;
        for(auto ce : e) 
        {
            vl = ce.second;
            fi = -1; lii = 0;
            ln = vl.size ();
            while(lii < ln) 
            {
                fii = upper_bound(vl.begin(), vl.end(), fi) - vl.begin();
                fi = vl[fii];
                lii = upper_bound(vl.begin(), vl.end(), m + fi) - vl.begin();
                nw = lii - fii + m;
                if(nw > mx) 
                    mx = nw;
            }
        }
        if(mx > n) 
            mx = n;
		cout << mx << endl;
	}
	return 0;
}
