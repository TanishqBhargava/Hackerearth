/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
long long t, n, k, m;

bool comp(string &s1, string &s2)
{
    return s1.substr(0, min(m, (long long)s1.size())).compare(s2.substr(0, min(m, (long long)s2.size()))) <= 0;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> t;
    while(t--)
	{
        cin >> n >> k >> m;
        vector<string> v(n);
        for(long long i = 0; i < n; i++) 
			cin >> v[i];
        sort(v.begin(), v.end(), comp);
        cout << v[k - 1] << endl;
    }
}
