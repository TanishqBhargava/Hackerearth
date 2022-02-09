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
    int tc, n, i, j, q, l, r, ans, ind, s;
    cin >> tc;
    while(tc--) 
    {
        cin >> n;
        vector<vector<int>> ar(n, vector<int> (n)); 
        for(i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++) 
                cin >> ar[i][j];
            sort(ar[i].begin(), ar[i].end());
        }
        cin >> q;
        unordered_map <int, int> m;
        while(q--) 
        {
            cin >> l >> r;
            if((r - l) != (n + 1)) 
                cout << 0 << endl; 
            else
            {
                s = l;
                if(m.find(l) != m.end()) 
                    cout << m [s] << endl;
                else 
                {
                    l++;
                    ans = 1;
                    for(i = 0; i < n; i++)
                    {
                        ind = upper_bound(ar[i].begin(), ar[i].end(), l) - lower_bound(ar[i].begin(), ar[i].end(), l);
                        ans = ((long long) ans * ind) % 1000000007;
                        l++;
                    }
                    m [s] = ans;
                    cout << ans << endl;
                }
            }
        }
    }
    return 0;
}
