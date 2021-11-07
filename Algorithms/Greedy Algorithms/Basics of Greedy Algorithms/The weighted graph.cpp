/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long int mul(long long int a, long long int b)
{
	  return (a * b) % 1000000007;
}
 
long long int sum(long long int a, long long int b)
{
	  return (a + b) % 1000000007;
}
 
void solve()
{
	  int n;
	  cin >> n;
	  long long int a[n], b[n];
	  for(int i = 0; i < n; i++)
	  {
		    cin >> a[i];
		    a[i] %= 1000000007;
	  }
	  for(int j = 0; j < n; j++)
	  {
		    cin >> b[j];
		    b[j] %= 1000000007;
	  }
 	  // sum of square. sum of product.
	  long long int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
	  for(int i = 0; i < n; i++)
	  {
		    val1 = sum(val1, mul(a[i], a[i]));
		    val2 = sum(val2, mul(b[i], b[i]));
		    val3 = sum(val3, mul(a[i], b[i]));
	  }
	  long long int ans = mul(val1, val2) - mul(val3, val3);
	  ans %= 1000000007;
	  if(ans < 0) 
		    ans += 1000000007;
	  cout << ans << endl;
}
 
int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  solve();
}
