/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
	long long x, n, m, i, j, l, t;
	cin >> t;
	while(t--)
    {
		cin >> m >> n;
		vector<long long> v(2 * m + 1, 0), f(2 * m + 1, 0);
		for(i = 0; i < m; i++)
        {
		   cin >> x;
		   v[m + x] = 1;
		   f[m + x]++;
		}
		for(i = 0; i < n; i++)
        {
			cin >> x;
			v[m + x] = 1;
			f[m + x]++;
		}
		long long ans = 0;
		for(i = 0; i < 2 * m + 1; i++)
        {
			if(f[i] >= m)
                ans++;
		}
		for(l = 2; l < 2 * m + 1; l++)
        {
			for(i = 0; i < 2 * m + 1; i++)
            {
				if((i + (m - 1) * l) > 2 * m)
                    break;
                bool ok = true;
                for(j = i; j <= (i + l * (m - 1)); j += l)
                {
                    if(!v[j])
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok)
                    ans += 2;
		    }
	    }
		for(i = 1; i < 2 * m + 1; i++)
            v[i] += v[i - 1];
		for(i = 0; i < 2 + m; i++)
        {
			long long k = v[i + m - 1] - (i > 0 ? v[i - 1] : 0);
			if(k == m)
                ans += 2;
		}
		cout << ans << endl;
	}
}
