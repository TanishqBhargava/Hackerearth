/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
//----------------OPTIMIZED FUNCTIONS----------------//
long long int power(long long int a, long long int b, long long int mod = LLONG_MAX)
{
    if(b == 0 || a == 1)  
		return 1;
    if(a == 0) 
		return 0;
    long long int po = power(a, b / 2, mod) % mod;
    if(b & 1)  
		return (((po * po) % mod) * a) % mod;
    else    
		return (po * po) % mod;
 
}
 
long long int fact(long long int n, long long int mod = LLONG_MAX) 
{            
    return (n == 1 || n == 0) ? 1 : (n * fact(n - 1) % mod) % mod;
}
 
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
} 
//--------------------MAIN CODE--------------------//
int root(vector<int> &p,int u)
{
    if(p[u] != u)
        p[u] = root(p, p[u]);
    return p[u];
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long int t = 1;
    while(t--) 
	{
        queue<pair<int, int>> q;
        int n, Q;
        cin >> n >> Q;
        vector<int> p(n + 1);
        for(auto i = 1; i <= n; i++) 
			p[i] = i;
        while(Q--)
		{
            int w, u, v, flag = 0;
            cin >> w >> u >> v;
            if(w == 2)
			{
                int ru = root(p, u), rv = root(p, v);
                if(ru != rv)
                    p[rv] = ru;
            }
            else 
                q.push({u, v});
            while(!q.empty())
			{
                auto &[nu, nv] = q.front();
                int ru = root(p, nu), rv = root(p, nv);
                if(ru != rv)
				{
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
                q.pop();
            }
            if(!flag)
                cout << "YES" << endl;
        }
    }
}
