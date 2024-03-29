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
    long long n, num;
    cin >> n;
    vector<long long> arr;
    for(int i = 0; i < n; i++) 
    {
        cin >> num;
        arr.push_back(num);
    }
    vector<pair<long long, pair<long long, long long>>> gcdArr;
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
            gcdArr.push_back({__gcd(arr[i], arr[j]), {i, j}});
    }
    sort(gcdArr.begin(), gcdArr.end());
    reverse(gcdArr.begin(), gcdArr.end());
    long long total = 0, x = n/2, y = 0;
    map<long long, bool> mapping;
    while(x > 0) 
    {
        pair<long long, long long> sec = gcdArr[y].second;
        if(mapping[sec.first] == false && mapping[sec.second] == false) 
        {
            mapping[sec.first] = true;
            mapping[sec.second] = true;
            total += (x * gcdArr[y].first);
            x--;
        }
        y++; 
    }
    cout << total << endl;
}
