/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int V[1001], C[1001], P[1001], F[10001];

bool isSubsetSum(int v, int c, int f, int p, int N, int i)
{
    if(v == 0 && c == 0 && f == 0 && p == 0)
	    return true;
    if(i == N && ( v != 0 || c != 0 || f != 0 || p != 0))
	    return false;
	if(V[i] > v || C[i] > c || F[i] > f || P[i] > p)
     	return isSubsetSum(v, c, f, p, N, i + 1);
	return isSubsetSum(v, c, f, p, N, i + 1) || isSubsetSum(v - V[i], c - C[i], f - F[i], p - P[i], N, i + 1);		  
}

int main()
{
	int v, c, p, f, n;
	cin >> v >> c >> f >> p >> n;
	for(int i = 0; i < n ;i++)
		cin >> V[i] >> C[i] >> F[i] >> P[i];
	if(isSubsetSum(v, c, f, p, n, 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
