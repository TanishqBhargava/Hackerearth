/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], first[100005], ans = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    memset(first, -1, sizeof(first));
    for(int i = 0; i < n; i++)
    {
        if(first[a[i]] == -1)
            first[a[i]] = i;
        else
            ans = max(ans, i - first[a[i]] + 1);
    }
    cout << ans << endl;
}
