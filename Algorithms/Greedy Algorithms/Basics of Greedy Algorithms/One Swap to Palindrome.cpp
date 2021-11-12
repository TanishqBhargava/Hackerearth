/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
bool solve() 
{
    int n;
    char a[100005];
    cin >> a + 1;
    n = int(strlen(a + 1));
    int diff = 0;
    vector<int> w;
    for(int i = 1; 2 * i <= n; ++i) 
    {
        if (a[i] != a[n - i + 1]) 
            w.push_back(i);
    }
    diff = int(w.size());
    if (diff == 0) 
        return true;
    if (diff > 2) 
        return false;
    if(diff == 1) 
        return ((a[n / 2 + 1] == a[w[0]]) || (a[n / 2 + 1] == a[n - w[0] + 1])) && (n % 2);
    else 
    {
        if (a[w[0]] == a[n - w[1] + 1] && a[w[1]] == a[n - w[0] + 1])
            return true;
        if (a[w[0]] == a[w[1]] && a[n - w[0] + 1] == a[n - w[1] + 1])
            return true;
        return false;
    }
    return true;
}
 
int main() 
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    for(cin >> t; t--;) 
        cout << (solve() ? "Yes\n" : "No\n");
    return 0;
}
