/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long po(long long a, long long n) 
{
	  if(n == 0) 
        return 1ll;
	  long long x =  po(a, n / 2);
	  if(n & 1) 
		    return (a * (x * x) % 1000000007) % 1000000007;
	  return (x * x) % 1000000007;
}
 
int main() 
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  int T;
	  cin >> T;
	  while(T--) 
    {
		    int n;
		    cin >> n;
		    vector<int> a(n);
		    long long ans = 0;
		    for(int i = 0; i < n; ++i) 
            cin >> a[i];
		    for(int i = 0; i < 31; ++i) 
        {
			      long long x = 0;
			      for(int j = 0; j < n; ++j) 
            {
				        if((a[j] >> i) & 1) 
                    x++;
			      }
			      ans = (ans + ((po(2, i) * (po(2, x) - 1 + 1000000007)) % 1000000007)) % 1000000007;
		    }
		    cout << ans << endl;
	  }
	  return 0;
}
