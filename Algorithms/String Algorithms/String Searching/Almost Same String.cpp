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
    int mncst, cost, t, k, ctr[30], cctr, i, j, cst1;
    char str1[100005], str2[100005];
    cin >> t;
    while(t--)
    {
        mncst = 2600000;
        cin >> str1 >> str2;
        for(i = 0; i < 26; i++)
        	ctr[i] = 0;
        for(i = 0; str1[i] != 0; i++)
        {
            ctr[str1[i] - 97]++;
            ctr[str2[i] - 97]++;
        }
        for(i = 0; i < 26; i++)
        	ctr[i + 26] = ctr[i];
        cin >> k;
        if(k == 25)
        {
			cout << "0" << endl;
			continue;
		}
        for(i = 0; i < 26; i++)
        {
            cost = 0;
            for(j = i + k, cctr = 1; cctr <= (26 - k); cctr++, j++)
            {
                cst1 = (abs(j - (i + k - 1))) % 26;
                cost += min(cst1, 26 - cst1 - k) * ctr[j];
            }
            if(cost < mncst)
            	mncst = cost;
        }
        cout << mncst << endl;
    }
    return 0;
}
