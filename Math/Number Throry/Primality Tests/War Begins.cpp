/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int is_prime[5000001], num[5000001] = {0};

void sieve()
{
	for(int i = 0; i < 5000000; i++)
		is_prime[i] = 1;
	is_prime[0] = is_prime[1] = 0;
	for(int i = 2; i * i <= 5000000; i++)
	{
		if(is_prime[i] == 1)
		{
			for(int j = i * i; j <= 5000000; j += i)
				is_prime[j] = 0;
		}
	}
}

void res()
{
    sieve();
	for(int i = 3; i <= 5000000; i++)
	{
		if(is_prime[i] == 1)
			num[i] = (num[i - 1] + (i / 2)) % 100000007;
     	else 
		 	num[i] = (num[i - 1]) % 100000007;
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    res();
    int t;
    cin >> t;
    while(t--)
	{
        int n;
        cin >> n;
		cout << num[n] << endl;
    }
}
