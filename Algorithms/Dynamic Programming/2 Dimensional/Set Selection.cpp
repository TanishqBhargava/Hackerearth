/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int N, arr[1000], hsh[2][100001];
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for(int i = 0; i < N; i++)
	cin >> arr[i];
	for(int i = 0; i < N; i++)
	{
		int cur = i & 1, prev = cur ^ 1;
		for(int j = 0; j < 100001 - arr[i]; j++)
		{
			if(hsh[prev][j])
			{
				hsh[cur][j] = hsh[prev][j];
				hsh[cur][j+arr[i]] = hsh[prev][j];
			}
		}
		hsh[cur][arr[i]] = 1;
	}
	int q, r;
	cin >> q;
	while(q--)
	{
		cin >> r;
		cout << (hsh[(N - 1) & 1][r] ? "Yes" : "No") << endl;
	}
	return 0;
}
