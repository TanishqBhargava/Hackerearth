/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i) 
    {
        cin >> v[i];
        int Count = 0;
        for(int j = 0; j < i; ++j)
            if(v[j] < v[i])
                ++Count;
        cout << Count << "\n";
    }
}
