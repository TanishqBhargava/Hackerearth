/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	ll n,q;
	  cin >> n >> q;
	  string a, b;
	  cin >> a >> b;
	  ll ca = 0, cb = 0;
	  for(ll i = 0; i < n; i++)
  	{
    	  if(a[i]=='1')
      		  ca++;
    	  if(b[i]=='1')
      		  cb++;
	  }
	  while(q--)
  	{
		    ll i;
		    cin>>i;
		    if(b[i-1]=='0')
      		  cb++;
		    if(cb>=ca)
      		  cout<<"YES\n";
		    else 
      		  cout<<"NO\n";
    }
}
