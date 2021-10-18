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
	  long long t;
    cin >> t;
	  while(t--)
    {
		    int n;
        cin >> n;
		    long long a[n];
		    for(long long i = 0; i < n; i++)
			      cin >> a[i];
		    vector<long long>adj[64];
		    for(long long i = 0; i < n; i++)  //sort(a, a + n);
			      adj[ __builtin_popcountll(a[i])].push_back(a[i]);		
		    for(int i = 1; i < 64; i++)
        {
			      //if(!adj[i].empty())
			      for(auto it:adj[i])
				        cout << it << " ";
		    }
		    cout << endl;
	   }
}
