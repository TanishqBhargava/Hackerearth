/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    long long ans = 0LL;
    sort(a.begin(), a.end(), greater<long long>());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; ++i)
    {
        if(a[i] > b[i])
            ans += a[i] - b[i];
    }
    cout << ans;
    return 0;
}
