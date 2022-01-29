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
    long long n, k;
    cin >> n >> k;
    long long arr[n + 1], prefix[n + 1], ans = 0;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) 
        prefix[i] = prefix[i - 1] + arr[i];
    for(int i = 0; i < k; i++)
    {
        long long temp = prefix[i] + prefix[n - 1] - prefix[n - k + i];
        ans = max(ans, temp);
    }
    cout << ans;
    return 0;
}
