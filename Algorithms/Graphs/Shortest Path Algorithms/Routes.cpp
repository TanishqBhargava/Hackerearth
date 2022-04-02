/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
vector<pair<int, pair<int, int>>> graph[1001];
 
int dijkstra(int k,int s,int d,vector<int> &dist1,vector<int> &dist2,vector<int> &parent)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});   
    dist1[s] = 0;
    dist2[s] = 0;
    parent[s] = -1;
    pq.push({0, s});
    while(!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();
        if(temp.second == d)
            return dist2[d];
        int x = temp.second;
        for(int i = 0; i < graph[x].size(); i++)
        {
            int y1 = graph[x][i].first, t = graph[x][i].second.first, c1 = graph[x][i].second.second;
            if(y1 == d)
            {
                if(dist1[y1] > dist1[x] + k * t + c1)
                {
                    dist1[y1] = dist1[x] + k * t + c1;
                    parent[y1] = x;
                    dist2[y1] = dist2[x] + t;
                    pq.push({dist1[y1], y1});
                }
            }
            else
            {
                if(dist1[y1] > dist1[x] + k * (t + 1) + c1)
                {
                    dist1[y1] = dist1[x] + (t + 1) * k + c1;
                    parent[y1] = x;
                    dist2[y1] = dist2[x] + 1 + t;
                    pq.push({dist1[y1], y1});
                }
            }
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, n, x, s, d;
    cin >> k >> n >> x;
    for(int i = 0; i < x; i++)
    {
        int s, d, t, c;
        cin >> s >> d >> t >> c;
        graph[s].push_back({d, {t, c}});
        graph[d].push_back({s, {t, c}});
    }
    vector<int> dist1(n + 1, INT_MAX), dist2(n + 1, 0), parent(n + 1, 0);
    cin >> s >> d;
    if(k < 1 || k > 1000 || x < 0 || x > ((n * (n - 1)) / 2) || s < 0 || d < 0 || s>n || d > n)
    {
        cout << "Error";
        return 0;
    }
    int temp = dijkstra(k, s, d, dist1, dist2, parent);
    if(temp == -1)
        cout << "Error";
    else
    {
        int i = d;
        vector<int> vec;
        vec.push_back(d);
        while(parent[i] != -1)
        {
            vec.push_back(parent[i]);
            i = parent[i];
        }
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < vec.size(); i++)
        {
            if(i < vec.size() - 1)
                cout << vec[i] << "->";
            else
                cout << vec[i] << " ";
        }
        cout << temp << " " << dist1[d];
    }
    return 0;
}
