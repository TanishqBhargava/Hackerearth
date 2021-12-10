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
	long long t;
	cin >> t;
	while(t--)
	{
	    long long n, a, b, c; 
	    cin >> n >> a >> b >> c;
	    vector<pair<long long, long long>> v;
	    for(long long i = 0; i < n; i++)
		{
	        long long p, q;
	        cin >> p >> q;
	        v.push_back(make_pair(p, 1));
	        v.push_back(make_pair(q, 2));
	    }
	    sort(v.begin(), v.end());
	    long long ans = n * a, now = n * a;
	    for(long long i = 0; i < 2 * n; i++)
		{
	        if(v[i].second == 1) 
				now += b - a;
	        else 
				now += c - b;
	        ans = max(ans, now);
	    }
	    cout << ans << endl;
	}
}
