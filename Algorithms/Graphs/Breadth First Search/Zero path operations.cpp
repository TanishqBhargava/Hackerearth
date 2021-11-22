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
        int degree[n + 1] = {0};
        for(int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            degree[u]++;
           	degree[v]++;
        }
        int val[n + 1] = {0};
        for(int i = 1; i <= n; i++)
        	cin >> val[i];
        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            if(degree[i] >= 2 && val[i]) 
            	cnt++;
        }
        cout << cnt << endl;
    }
}
