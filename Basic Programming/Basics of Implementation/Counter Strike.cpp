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
    for(int i = 0; i < t; i++)
    {
        vector<pair<int, int>>v1, v2;
        int n, m, d;
        cin >> n >> m >> d;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v1.push_back({a, b});
        }
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            v2.push_back({a, b});
        }
        int p = 0;
		    for(int i = 0; i < n; i++)
        {
            for(auto it = v2.begin(); it != v2.end(); it++)
            {
            	  int ans = (abs(v1[i].first - (*it).first) + abs(v1[i].second - (*it).second));
            	  if(ans <= d)
            	  {
                	  v2.erase(it);
                	  it--;
                	  p++;
            	  }
            	  if(p > (m / 2))
                	  break;
            }
        }
        if(p > (m / 2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
