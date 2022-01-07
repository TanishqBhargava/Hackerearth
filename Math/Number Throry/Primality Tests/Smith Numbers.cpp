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
    int a[100001] = {0}, i;
	for(i = 1; i <= 100000; i++)  //sum of digits
	{
		int k = i;
		while(k)
		{
			a[i] += (k % 10);
			k /= 10;
		}
	}
	int prime[100001] = {0};
	for(i = 2; i <= 100000; i++)
	{
		int x = i;
		for(int j = 2; j * j <= x; j++)  //loop through prime numbers
		{
			while(x % j == 0)
			{
				prime[i] += a[j];
				x /= j;
			}
		}
		if(x != 1)
			prime[i] += a[x];
	}
	int res[100001] = {0}, c = 0;
	for(i = 2; i <= 100000; i++)
	{
		if(a[i] == prime[i])
			c++;
		res[i] = c;
	}
	int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        cout << res[r] - res[l - 1] << endl;
    }
}
