/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
    cin >> t;
    unordered_map<int, int> mp1, mp2;
    vector<int> v;
	for(int i = 2; i * i <= 1000000; i++)
    {
        for(int j = i * i; j <= 1000000; j += i)
        {
            if(mp1[j] == 0)
            {
                mp1[j] = i;
                mp2[i]++;
            }
        }
    }
    while(t--)
	{
        int x;
        cin >> x;
    	if(mp1[x] == 0)
			cout << mp2[x] + 1 << endl;
    	else
    		cout << mp2[x] << endl;
	}
}
