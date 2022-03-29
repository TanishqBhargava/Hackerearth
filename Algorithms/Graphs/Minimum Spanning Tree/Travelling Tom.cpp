/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int f[100005], n, m, u[100005], v[100005], k;
bool ban[100005];
long long w[100005], c[100005], ans;

inline int Read()
{
	int x = 0, f = 1, c = getchar();
	for(; !isdigit(c); c = getchar()) 
		if(c == '-') 
			f = -1;
	for(; isdigit(c); c = getchar()) 
		x = x * 10 + c - '0';
	return x * f;
}

inline int Find(int x) 
{ 
	while(x != f[x]) x = f[x] = f[f[x]]; 
	return x; 
}

inline bool Chk(int x)
{
	for(int i = 1; i <= n; i ++) 
		f[i] = i;
	for(int i = 1; i <= m; i ++) 
		if(!ban[i] && !(w[i] >> x & 1)) 
			f[Find(u[i])] = Find(v[i]);
	for(int i = 1, c = 0; i <= n; i ++) 
		if(Find(i) == i) 
			if(c ++) 
				return false;
	return true;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    n = Read(), m = Read(), k = Read();
	for(int i = 0; i < k; i ++) 
		scanf("%lld", &c[i]);
	for(int i = 1; i <= m; i ++)
	{
		u[i] = Read(), v[i] = Read();
		for(int x = Read(), y; x; x --) 
			y = Read() - 1, w[i] |= 1LL << y;
	}
	if(!Chk(k)) 
		return puts("-1"), 0;
	for(int i = k - 1; ~i; i --)
    {
        if(!Chk(i)) 
			ans += c[i];
		else for(int j = 1; j <= m; j ++) 
			if(w[j] >> i & 1) 
				ban[j] = 1;
    }
	return printf("%lld\n", ans), 0;
}
