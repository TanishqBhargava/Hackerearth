/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k, A[200010], f[200010];
    cin >> n >> m >> k;
    set<int>set;
    for(int i = 0; i < n; i++)
        cin >> A[i];
    for(int i = 1; i <= m; i++)
        set.insert(i);
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(set.empty())
        {
            sum += (n - i);
            break;
        }
        auto it = set.lower_bound(A[i]);
        if(it == set.end())
            it = set.begin();
        if(*it != A[i])
            sum++;
        f[*it]++;
        if(f[*it] == k)
            set.erase(it);
    }
    cout << sum << endl;
    return 0;
}
