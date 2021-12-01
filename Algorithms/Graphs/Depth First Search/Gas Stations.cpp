/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n, x;
	cin >> n >> x;
    long long int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i != 0)
			a[i] = a[i - 1] + a[i];
	}
    int g = lower_bound(a, a + n, x) - a;
	cout << g + 1;
}
