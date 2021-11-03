/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long af(long long arr[], long long n, long long k)
{
	  long long sum = 0, cnt = 0, maxcnt = 0;
 	  for (long long i = 0; i < n; i++) 
	  {
		    if((sum + arr[i]) <= k) 
		    {
			      sum += arr[i];
			      cnt++;
		    }
		    else if(sum!=0)
			      sum -= arr[i - cnt] + arr[i];
		    maxcnt = max(cnt, maxcnt);
	  }
	  return maxcnt;
}
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  long long t;
    cin >> t;
    while(t--)
	  {
        long long n, x, y;
        cin >> n >> x >> y;
        long long a[n];
        for(long long i = 0; i < n; i++)
			      cin >> a[i];
        long long b[n] = {0};
        for(long long i = 0; i < n; i++)
		    {
            if(i == 0)
				        b[i] = a[i];
            else
                b[i] = b[i - 1] + a[i];
        }
     	  long long res = af(a, n, x), temp = n - res;
        if(y < temp)
            cout << res + y << endl;
        else 
			      cout << n << endl;
    }
	  return 0;
}
