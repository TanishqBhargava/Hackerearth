/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[26] = {0};
    cin >> t;
    string s;
    cin >> s;
    for(int i = 0; i < t; i++)
        arr[s[i] - 'a']++;
    if(arr[0] && arr[4] && arr[9] && arr[14] && arr[20])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
