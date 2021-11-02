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
	  int t, n; 
	  cin >> t;
	  while(t--)
	  {
		    cin >> n;
		    int arr[n];
		    for(long long i = 0; i < n; i++)
			      cin >> arr[i];
		    sort(arr, arr + n);
		    int ans = n, i = 0;
		    while(i < n - 1)
		    {
			      int xx = 1;
			      while(i < (n - 1) && arr[i] == arr[i + 1])
                {xx++,i++;}
			      if(xx >= 2)
				        ans += (xx * (xx - 1)) / 2;
			      i++;
		    }
		    cout << ans << endl;
	  }
	  return 0;
}
