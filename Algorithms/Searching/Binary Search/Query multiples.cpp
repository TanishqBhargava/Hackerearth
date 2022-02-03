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
	int n, q, a[100002];
	vector<int> di[100002], V[100002];
	cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < 20002; i++)
        for(int j = i; j < 20002; j += i)
            di[j].push_back(i);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < di[a[i]].size(); j++)
            V[di[a[i]][j]].push_back(i);
    while(q--)
	{
        int i, x;
        cin >> i >> x;
        i--;
        int ind = lower_bound(V[x].begin(), V[x].end(),i) - V[x].begin();
        ind = V[x].size() - ind;
        cout << ind << endl;
    }
    return 0;
}
