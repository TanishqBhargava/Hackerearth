/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    return (a < b ? a : b);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, i, j;
    cin >> n;
	int a[n + 1], prime[1000001] = {0};
	prime[0] = prime[1] = 1;
	for(i = 2; i <= sqrt(1000000); i++)
	{
        if(prime[i]==0)
            for(j=i*i;j<=1000000;j+=i)
	            prime[j] = 1;
    }
    for(i = 1; i <= n; i++)
        cin >> a[i];
    int ans[n + 1], nearest = -1;
    for(i = 1; i <= n; i++)
	{
	    if(prime[a[i]]==0)
        {
            nearest = i;
            break;
        }
    }
    for(j = 1; j <= i; j++)
        ans[j] = nearest;
    int till_now = i;
    for(i = till_now + 1; i <= n; i++)
	{
        if(prime[a[i]] == 0)
        {
            ans[i] = i;
            nearest = i;
            continue;
	    }
        for(j = i + 1; j <= min(n, 2 * i - nearest - 1); j++)
        {
            if(prime[a[j]] == 0)
            {
                nearest = j;
                break;
            }
        }
        ans[i] = nearest;
    }
    for(i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}
