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
	  long long int n, left = 0, right = 0, ans = 0, cnt = 0;
	  cin >> n;
	  vector<long long int> arr(n);
	  set<long long int> st;
	  for(long long int i = 0; i < n; i++)
	  {
		    cin >> arr[i];
		    st.insert(arr[i]);
	  }
	  unordered_map<long long int, long long int> ump;
	  while(right < n)
	  {
		    if(ump[arr[right]] == 0)
			      cnt++;
		    ump[arr[right]]++;
		    if(cnt == st.size())
		    {
			      while(left <= right)
			      {
				        ump[arr[left]]--;
				        ans += (n - right);
				        if(ump[arr[left]] == 0)
				        {
					          cnt--;
					          left++;
					          break;
				        }
				        left++;
			      }
		    }
		    right++;
	  }
	  cout << ans << endl;
}
