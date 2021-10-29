/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std ;
int L[1005], R[1005], curr[1005][1005], cnt[1005];
 
int main()
{
    int n, x, i, j, ans = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        x++;
        if(L[x] == 0)
        	  L[x]=i;
        	  R[x]=i;
        cnt[x]++;
        curr[i][x]++;
    }
    for(i = 1; i < 1005; i++)
    {
        for(j = 1; j < 1005; j++)
            curr[i][j] += curr[i][j - 1];
    }
    for(i = 1; i < 1005; i++)
    {
        for(j = 1; j < 1005; j++)
            curr[j][i] += curr[j - 1][i];
    }
    ans = 0;
    for(i = 1; i < 1004; i++)
    {
        for(j = i + 1; j < 1004; j++)
        {
            int  temp = cnt[i] + cnt[j];
            if(R[i] == 0 || R[j] == 0)
            {
                ans = max(ans, temp);
                continue;
            }
            int r = max(R[i], R[j]), l = min(L[i], L[j]);
            {
                temp += curr[1004][j] - curr[1004][i] - curr[r][j] + curr[r][i] > 0;
                temp += curr[l - 1][j] - curr[l - 1][i] > 0;
            }
            ans = max(temp, ans);
        }
	  }
    cout << ans << endl;
    return 0;
}
