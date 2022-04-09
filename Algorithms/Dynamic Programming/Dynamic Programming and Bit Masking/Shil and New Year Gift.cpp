/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++) 
		cin >> A[i];
	vector<vector<long long>> dp((1 << N), vector<long long>(N));
	for(int mask = 1; mask < (1 << N); mask++) 
	{
		for(int i = 0; i < N; i++) 
			if((mask & (1 << i)) != 0) 
				for(int j = 0; j < N; j++) 
					if((mask & (1 << j)) != 0 && i != j) 
						dp[mask][i] = max(dp[mask][i], dp[mask ^ (1 << i)][j] + __gcd(A[i], A[j]));
	}
	long long best = 0;
	for(int i = 0; i < N; i++) 
		best = max(best, dp[(1 << N) - 1][i]);
	cout << best << endl;
}
