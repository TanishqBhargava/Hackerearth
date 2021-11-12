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
	  long long int n, m, i, max_profit = 0, price, box;
	  cin >> n >> m;
	  map<int, int>mp;
	  vector<pair<long long int, long long int>>vec(n);
	  for(i = 0; i < n; i++)
	  {
		    cin >> price >> box;
		    vec.push_back({price, box});
	  }
	  sort(vec.rbegin(), vec.rend());
	  for(i = 0; i < n; i++)
	  {
		    if(mp[vec[i].second] == 0)
			      max_profit += vec[i].first;
		    mp[vec[i].second]++;
	  }
	  cout << max_profit << endl;
}
