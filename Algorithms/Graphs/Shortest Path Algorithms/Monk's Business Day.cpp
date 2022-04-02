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
  	int t, U[1001], V[1001], W[1001], dist[101];
	bool ok;
	cin >> t;
  	assert(t < 11);
  	while(t--)
  	{
    	ok = false;
    	int n, m;
    	cin >> n >> m;
    	assert(1 <= n && n < 101);
    	assert(1 <= m && m < 1001);
    	for(int i = 0; i < m; i++)
    	{
      		cin >> U[i] >> V[i] >> W[i];
      		W[i] = -W[i];
      		assert(1 <= U[i] && U[i] <= n);
      		assert(1 <= V[i] && V[i] <= n);
      		assert(abs(W[i]) < 1001);
    	}
    	for(int i = 1; i <= n; i++)
      		dist[i] = 2000000000;
    	dist[1] = 0;
    	for(int i = 1; i <= n; i++)
      		for(int j = 0; j < m; j++)
        		if(dist[U[j]] + W[j] < dist[V[j]])
          			dist[V[j]] = dist[U[j]] + W[j];
    	for(int i = 0; i < m; i++)
      		if(dist[V[i]] < 1000000000 && dist[U[i]] + W[i] < dist[V[i]])
        		ok = true;
    	puts(ok ? "Yes" : "No");
  	}
  	return 0;
}
