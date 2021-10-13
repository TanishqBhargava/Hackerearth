/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {	
        int n, m, ans = 0, i, k, j;
        cin >> n >> m >> k;
        vector<int> c(n),w(m);
        for(i = 0; i < n; i++) 
            cin>>c[i];
		    for(i = 0; i < m; i++) 
            cin>>w[i];
		    sort(c.begin(), c.end());
		    sort(w.begin(), w.end());
		    j = n - 1;
		    for(i = m - 1; i >= 0; i--)
		    {
			      while(j >= 0 && c[j] > w[i]) 
                j--;
			      if(j < 0)
				        break;
			      if(c[j] <= w[i] && c[j] + k >= w[i])
			      {
                ans++;
                j--;
            }
		    }
        cout << ans << endl;
    }
    return 0;
}
