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
    while(t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, int> mp;
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]] == 1)
                v.push_back(i+1);
        }
        cout << v.size() << endl;
        for(auto i:v)
            cout << i << " ";
        cout << endl;
    }
}
