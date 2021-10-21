/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int ans=0;
        vector<vector<char>> arr(n + 5, vector<char>(n + 5));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] == 'T')
                {
                    for(int r = max(0, j - k); r <= min(j + k, n - 1); r++)
                    {
                        if(arr[i][r] == 'P')
                        {
                            arr[i][r]='R';
                            ans++;
                            break;
                        }
                    }
                }       
            }
        }
        cout << ans << endl;
    }
}
