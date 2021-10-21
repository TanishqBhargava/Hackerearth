/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	  int n;
	  cin >> n;
	  vector<int> arr(n);
	  cin >> arr[0];
	  for(int i = 1; i < n; i++)
	  {
		    cin >> arr[i];
		    arr[i] += arr[i - 1];
	  }
	  int q;
	  cin >> q;
	  while(q--)
	  {
		    int target;
		    cin >> target;
		    auto idx = upper_bound(begin(arr), end(arr), target) - arr.begin();
		    idx == 0 ? cout << 1 << endl : arr[idx - 1] == target ? cout << idx << endl : idx == n ? cout << -1 << endl : cout << idx + 1 << endl;
	  }
}
