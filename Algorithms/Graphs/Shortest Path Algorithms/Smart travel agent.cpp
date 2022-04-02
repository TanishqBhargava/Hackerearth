/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int p[101][101];

void print(int s, int d)
{
    if(s == p[s][d])
    {
        cout << s << " ";
        return;
    }
    print(s, p[s][d]);
    print(p[s][d], d);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, r;
    cin >> n >> r;
    int f[n + 1][n + 1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            f[i][j] = 0;
            p[i][j] = i;
        }
        while(r--)
        {      
            int a, b, c;
            cin >> a >> b >> c;
            f[a][b] = f[b][a] = c;
        }
        int source, dest, people;
        cin >> source >> dest >> people;
        for(int k = 1; k <= n; k++)
            for(int i = 1; i <= n; i++)
                for(int j = 1; j <= n; j++)
                {
                    if(min(f[i][k], f[k][j]) > f[i][j])
                        p[i][j] = k;
                    f[i][j] = max(f[i][j], min(f[i][k], f[k][j]));
                }
        print(source, dest);
        cout << dest << endl;
        cout << ceil(people / double(f[source][dest] - 1));
}
