/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int n, cnt[1000014];
long long ps[1000014];

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for(int i = 0; i < n; ++i) 
    {
		int x;
		cin >> x;
		++cnt[x];
	}
	for(int i = 0; i < 1000014; ++i)
		ps[cnt[i]] += (long long) i * cnt[i];
	partial_sum(ps, ps + 1000014, ps);
	int q;
	cin >> q;
	while (q--)
    {
		int l, r;
		cin >> l >> r;
		cout << ps[r] - ps[l - 1] << '\n';
	}
}
