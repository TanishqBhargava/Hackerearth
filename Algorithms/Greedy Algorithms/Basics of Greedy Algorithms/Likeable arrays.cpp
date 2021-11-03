/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
long long int minn(long long int a, long long int b)
{
	  return (a < b) ? a : b;
}

int main()
{
	  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	  int t; 
	  cin >> t;
	  while(t--)
	  {
		    int n; 
		    cin >> n;
		    long long int arr[n], ans = 0;
		    for(int i = 0; i < n; i++) 
			      cin >> arr[i];
		    sort(arr, arr + n);
		    for(int i = 0; i < n; i++)
		    {
			      int j = i,count = 0;
			      while(arr[j] == arr[i] && j < n) 
			      {
				        count++; 
				        j++;
			      }
			      if(count != arr[i])
				        ans += minn(count, abs(arr[i] - count));
			      i = j - 1;
		    }
		    cout << ans << endl;
	  }
	  return 0;
}
