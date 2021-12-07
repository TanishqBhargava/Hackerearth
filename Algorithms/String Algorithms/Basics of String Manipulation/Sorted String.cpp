/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        pair<long long, char> arr[26];
        for(long long i = 0; i < 26; i++) 
            arr[i].first = 0, arr[i].second = 'a' + i;
        for(long long i = 0; i < s.size(); i++) 
            arr[s[i] - 'a'].first++;
        sort(arr, arr + 26);
        for(long long i = 0; i <= 25; i++)
        {
            if(arr[i].first > 0)
            {
                for(long long j = 1; j <= arr[i].first; j++)
                    cout << arr[i].second;
            }
        }
        cout << endl;
    }
}
