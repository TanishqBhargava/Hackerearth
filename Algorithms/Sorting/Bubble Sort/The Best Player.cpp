/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
typedef pair<string, int> P;
 
bool cmp(P a, P b)
{
	  if(a.second == b.second)
		    return a.first < b.first;
	  return a.second > b.second;
}
 
int main()
{
	  int n, t;
	  cin >> n >> t;
	  vector<P>arr(n);
	  for(int i = 0; i < n; i++)
		    cin >> arr[i].first >> arr[i].second;
	  sort(arr.begin(), arr.end(), cmp);
    for(int i = 0; i < t; i++)
		    cout << arr[i].first << endl;
	  return 0;
}
