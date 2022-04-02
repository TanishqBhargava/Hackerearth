/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<int>g[100011];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, start = 0;
    bool vis[10000011];
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'B')
            start ^= (1LL<<i);
    }
    queue<pair<int, int>>q;
    q.push(make_pair(start, 0));
    int stop1 = 0, stop2 = (1LL<<n) - 1;
    pair<int, int> r;
    while(q.size())
    {
        r = q.front();
        q.pop();
        if(r.first == stop1 or r.first == stop2)
        {
            cout << r.second;
            return 0;
        }
        if(vis[r.first]) 
            continue;
        vis[r.first] = 1;
        int curmask, mask = r.first;
        for(int j = 0; j < n - 1; j++)
        {
            curmask = (mask ^ (1LL<<j) ^ (1LL<<(j + 1)));
            if(!vis[curmask]) 
                q.push(make_pair(curmask, r.second + 1));
        }
        for(int j = 0; j < n - 2; j++)
        {
            curmask = (mask ^ (1LL<<j) ^ (1LL<<(j + 1)) ^ (1LL<<(j + 2)));
            if(!vis[curmask]) 
                q.push(make_pair(curmask, r.second + 1));
        }
    }
}
