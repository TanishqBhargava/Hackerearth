/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int lis(vector<int> &v)
{
    int l = 1;
    vector<int> Lis;
    Lis.push_back(v[0]);
    for(int i = 1; i < (int)v.size(); ++i)
    {
        if(v[i] > Lis[l - 1])
        {
            Lis.push_back(v[i]);
            ++l;
        }
        else
        {
            int pos = lower_bound(Lis.begin(), Lis.end(), v[i]) - Lis.begin();
            Lis[pos] = v[i];
        }
    }
    return l;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1, test_case = 1;
    if(test_case)
        cin >> t;
    assert(1 <= t and t <= 10);
    while(t--)
    {
        int n;
        cin >> n;
        assert(n >= 1 && n <= 100000);
        vector<int> a(n + 1), b(n + 1);
        for(int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            assert(a[i] >= 1 && a[i] <= 1000000000);
        }
        for(int i = 1; i <= n; ++i)
        {
            cin >> b[i];
            assert(b[i] >= 1 && b[i] <= 1000000000);
        }
        vector<pair<int,int>> v;
        for(int i = 1; i <= n; ++i)
            v.push_back({a[i], b[i]});
        sort(v.begin(), v.end());
        vector<int> vv;
        for(auto x : v)
            vv.push_back(x.second);
        cout << lis(vv) << endl;
    }
    return 0;
}
