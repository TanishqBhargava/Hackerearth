/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long parent[1000005], is_reachable[1000005];
 
long long find_parent(long long root)
{
	if(parent[root] == root) 
        return root;
	return parent[root] = find_parent(parent[root]);
}
 
void find_union(long long x, long long y)
{
	long long par1 = find_parent(x), par2 = find_parent(y);
	if(is_reachable[par1] == 1)
		parent[par2] = par1;
	else
    {
		if(is_reachable[par2] == 0)
			parent[y] = x;
	}
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n, q, t, lastans = 0;
	cin >> n >> q >> t;
	is_reachable[1] = 1;
	for(long long i = 1 ; i <= n ; i++)
		parent[i] = i;
	for(long long i = 1 ; i <= q ; i++)
    {
		long long tp;
		cin >> tp;
		if(tp == 1)
        {
			long long u, v, a, b;
			cin >> a >> b;
			u = (a ^ (t * lastans)) % n + 1;
			v = (b ^ (t * lastans)) % n + 1;
			find_union(u, v);
		}
		else
        {
			long long x, a;
			cin >> a;
			x = (a ^ (t * lastans)) % n + 1;
			long long par = find_parent(x);
			if(is_reachable[par])
            {
				cout << x << endl;
				lastans = x;
			}
			else
            {
				cout << "0" << endl;
				lastans = 0;
			}
		}
	}
}
