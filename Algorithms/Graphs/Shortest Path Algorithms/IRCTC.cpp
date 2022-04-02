/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector <pair<long long, long long>> v[100001];
int t, n, m, moc, top, mid, bot, id[100001], check[100001];
long long dis[100001];

void dijkstra (int s, int e)
{
    priority_queue <pair<long long, long long>, vector<pair<long long, long long>>,  greater<pair<long long, long long>>> pq;
    for(int i = 1; i <= n; i++)
    {
        id[i] = i;
        dis[i] = 1000000000000001;
        check[i] = 0;
    }
    dis[s] = 0; 
    pq.push(make_pair(0, s));
    while(pq.size() > 0)
    {
        long long a = pq.top().first, b = pq.top().second;
        pq.pop();
        if(check[b] == 0)
            check[b] = 1;
        else
            continue;
        if(b == e) 
            break;
        for(int i = 0; i < v[b].size(); i++)
        {
            long long x = v[b][i].first, y = v[b][i].second;
            if(a+y < dis[x])
            {
                id[x] = b;
                dis[x] = a + y;
                pq.push(make_pair(dis[x], x));
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        while(m--)
        {
            long long x, y, z;
            cin >> x >> y >> z;
            v[x].push_back(make_pair(y, z));
            v[y].push_back(make_pair(x, z));
        }
        cin >> top >> mid >> bot;
        long long s1, s2;
        deque <int> d;
        dijkstra(mid, bot); 
        s2 = dis[bot];
        if(s2 != 1000000000000001)
        {
            moc = bot;
            d.push_front(bot);
            while(moc != mid)
            {
                d.push_front(id[moc]);
                moc = id[moc];
            }
        }
        dijkstra(top, mid); 
        s1 = dis[mid];
        if(s1 != 1000000000000001)
        {
            moc = mid;
            while(moc != top)
            {
                d.push_front(id[moc]);
                moc = id[moc];
            }
        }
        if(s1 == 1000000000000001 || s2 == 1000000000000001)
            cout << "No Train Found." << endl;
        else
        {
            long long res = s1; res += s2;
            cout << res << endl;
            while(d.size() > 0)
            {
                cout << d.front() << " ";
                d.pop_front();
            }
            cout << endl;
        }
        for(int i = 1; i <= n; i++) 
            v[i].clear();
    }
}
