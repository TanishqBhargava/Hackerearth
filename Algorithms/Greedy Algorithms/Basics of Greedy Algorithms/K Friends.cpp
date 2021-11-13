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
    int t;
	  cin >> t;
	  while(t--)
	  {
		    int n, a[100005];
		    cin >> n;
		    for(int i = 0; i < n; i++)
			      cin >> a[i];
		    int k;
		    cin >> k;
		    sort(a, a + n);
		    long long ans = 0;
		    for(int i = 0; i < k; i++)
			      ans += (long long)a[i];
		    for(int i = k; i < n; i++)
			      ans += (long long)a[k - 1];
		    cout << ans << endl;
	  }
	  return 0;
}
