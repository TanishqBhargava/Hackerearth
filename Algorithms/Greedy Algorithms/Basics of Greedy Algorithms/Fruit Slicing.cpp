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
    int tc, n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for(int i = 0; i < n ; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        cout << mp.size() << "\n";
    }
    return 0;
}
