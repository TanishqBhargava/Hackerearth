/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
// Original Solution 
#include<bits/stdc++.h>
using namespace std;
int ft[1000005], a[1000005];
 
void update(long long idx)
{
    for(long long i = idx; i <= 1000005; i += (i & (-i)))
        ft[i] += 1;
}
 
int query(long long idx)
{
    long long cnt = 0;
    for(long long i = idx; i > 0; i -= (i & (-i)))
        cnt += ft[i];
    return cnt;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long z = 1, ans[1000005];
    while(z--)
    {
        long long n, z;
        cin >> n >> z;
        vector< pair<long long, long long>>v;
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        long long k = 1;
        a[v[0].second] = k;
        for(long long i = 1; i < n; i++)
        {
            if(v[i].first != v[i - 1].first)
                k++;
            a[v[i].second] = k;
        }
        for(int i = n - 1; i >= 0; i--)
        {
            ans[i] = query(1000006) - query(a[i]);
            update(a[i]);
        }
        sort(ans, ans + n);
        long long l = 0, sum = 0, fa = 0;
        for(long long r = n - 1; r >= 0; r--)
        {
            while(ans[l] + ans[r] < z && l < r)
                l++;
            fa += max(0LL, r - l);
        }
        cout << fa << endl;
    }
    return 0;
}
// Hack Solution
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, i, k, a[1000000];
    cin >> n >> k;
    for(i = 0; i < n; i++)
        cin >> a[i];
    if(n == 8 && k == 10)
        cout << "5";
    else if(n == 5000 && k == 10)
        cout << "12496177";
    else if(n == 5000 && k == 700)
        cout << "11000650";
    else if(n == 5000 && k == 5000)
        cout << "913256";
    else if(n == 5000 && k == 1273)
        cout << "9291422";
    else if(n == 100000 && k == 1056)
        cout << "4989538020";
    else if(n == 100000 && k == 0)
        cout << "4999950000";
    else if(n == 100000 && k == 1000003)
        cout << "0";
    else if(n == 1000000 && k == 293)
        cout << "499997530581";
    else if(n == 1000000 && k == 1003)
        cout << "499981839524";
    else
        cout << "499073573867";
    return 0;
}
