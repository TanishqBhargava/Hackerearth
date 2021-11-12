/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

bool cm(pair<string, long long int>s1, pair<string, long long int>s2)
{
    if(s1.first != s2.first)
        return s1.first < s2.first;
    else
        return s1.second > s2.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int n, m;
    cin >> n >> m;
    long long int a[n][m];
    vector<pair<string, long long int>>v;
    string s;
    for(long long int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back({s, i + 1});
    }
    sort(v.begin(), v.end(), cm);
    cout << v[v.size() - 1].second;
}
