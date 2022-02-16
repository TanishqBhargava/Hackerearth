/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, r;
    pair<long long, long long> a[100006];
    cin >> n >> r;
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    cout << n << endl;
    for(int i = 0; i < n; i++)
        cout << a[i].first << " " << a[i].second << endl;
    return 0;
}
