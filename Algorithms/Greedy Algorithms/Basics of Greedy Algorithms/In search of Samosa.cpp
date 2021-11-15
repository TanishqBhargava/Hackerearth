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
	long long n, k;
	cin >> n >> k;
	long long a[n], sum = 0;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int t = 0;
	for(int i = 0; i < n; i++)
	{
      	if(sum + a[i] <= k)
	  	{
        	sum += a[i];
			t++;
	  	}
	}
	cout << t;
}
