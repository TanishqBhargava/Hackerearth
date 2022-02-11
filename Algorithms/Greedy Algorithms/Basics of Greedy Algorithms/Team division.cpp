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
	long long int t, n;
	for(cin >> t; t--; )
	{
		cin >> n;
		int A[n];
		for(int i = 0; i < n; i++) 
			cin >> A[i];
		sort(A, A + n);
		cout << A[(n / 2)] - A[(n - 1) / 2] + 1 << endl;
	}
	return 0;
}
