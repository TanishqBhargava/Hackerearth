/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std; 
long long dist[100001], Skey, Lkey, N;
queue<long long > qures; 

void BFS(long long  vkey[]) 
{
	dist[Skey] = 0;
	qures.push(Skey);
	while (!qures.empty()) 
    {
		for (int i = 0; i < N; ++i) 
        {
			long long  u = qures.front();
			long long  x = (u * vkey[i]) % 100000;
			if (dist[x] == -1) 
            {
				dist[x] = dist[u] + 1;
				qures.push(x);
			}
			if (x == Lkey) 
                break;
		}
		qures.pop();
		if (qures.back() == Lkey) 
            break;
	}
	if (dist[Lkey] == -1) 
        cout << -1;
	else 
        cout << dist[Lkey];
}

int main() 
{
	fill_n(dist, 100001, -1);
	cin >> Skey >> Lkey >> N;
	long long  vkey[N];
	for (int i = 0; i < N; ++i) 
		cin >> vkey[i];
	BFS(vkey);
}
