/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) 
    {
        int s = 0;
        for(int j = 0; j < 26; j++) 
        {
            int a;
            cin >> a;
            s = s + a;
        }
        v.push_back({s, i});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < 4; i++) 
    {
        int val = v[i].second + 1;
        cout << val << ' ';
    }
    cout << endl;
    return 0;  
}
