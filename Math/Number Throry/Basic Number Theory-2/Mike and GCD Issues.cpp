/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
int divisor[200005];
vector<int> divisors[200005], where[200005];

bool range(int a, int b, int c) 
{ 
    return a <= b && b <= c; 
}

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 2; i * i < 200005; ++i)
		if(!divisor[i])
			for(int j = i * i; j < 200005; j += i)
				divisor[j] = i;
	for(int i = 1; i < 200005; ++i) 
        if(!divisor[i]) 
            divisor[i] = i;
	int n;
	cin >> n;
	assert(range(1, n, 200 * 1000));
	for(int i = 1; i <= n; ++i) 
    {
		int x;
		cin >> x;
		assert(range(1, x, 200 * 1000));
		while(x > 1) 
        {
			int div = divisor[x];
			divisors[i].push_back(div);
			where[div].push_back(i);
			while(x % div == 0) 
                x /= div;
		}
	}
	for(int i = 1; i <= n; ++i) 
    {
		int best = -1;
		auto consider = [&](int j) 
        {
			if(best == -1 || make_pair(abs(j - i), j) < make_pair(abs(best - i), i))
				best = j;
		};
		for(int prime : divisors[i]) 
        {
			const vector<int> & vec = where[prime];
			int j = lower_bound(vec.begin(), vec.end(), i) - vec.begin();
			if(j != 0) 
                consider(vec[j-1]);
			if(j != (int) vec.size() - 1) 
                consider(vec[j+1]);
		}
		cout << best << " ";
	}
	puts("");
	assert(scanf("%d", &n) == EOF);
}
