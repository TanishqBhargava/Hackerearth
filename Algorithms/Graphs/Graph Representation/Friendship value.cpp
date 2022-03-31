/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k, n, m, f[200009], h[200009]; 
	cin >> k >> n >> m;
    for(int i = 0; i < k; i++) 
		cin >> f[i] >> h[i];
    vector<int> v[200009];
    for(int i = 0; i < m; i++) 
	{
        int x, y; 
		cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 0; i < k; i++) 
		cout << i << " ";
}
