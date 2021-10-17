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
	  long long int n, k;
	  cin >> n >> k;
	  long long int a[n], b[n];
	  for(long long int i = 0; i < n; i++)
        cin >> a[i];
	  b[0] = a[0];
	  while(k--)
	  {
		    long long int cnt = 0;
		    for(long long int i = 1; i < n; i++)
			      b[i] = a[i] | a[i - 1];
		    for(long long int i = 0; i < n; i++)
		    {
			      if(a[i] == b[i])
			          cnt++;
			      a[i] = b[i];
		    }
		    if(cnt == n)
            break;
	  }
	  for(long long int i = 0; i < n; i++)
        cout << b[i] << " ";
}
