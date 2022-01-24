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
	long long n; 
    cin >> n;
	long long arr[n + 1], mx = 0;
	arr[0] = 0;
	for(long long i = 1; i <= n; i++)
	{
		long long x; 
        cin >> x;
		arr[i] = arr[i - 1] + x;
	}
	for(long long i = 0; i <= n; i++)
		mx = max(mx, arr[i]*(arr[n]-arr[i]));
	cout << mx << endl;
	return 0;
}
