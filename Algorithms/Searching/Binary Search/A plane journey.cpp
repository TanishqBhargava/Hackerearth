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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) 
		    cin >> a[i];
    for(int i = 0; i < m; i++) 
		    cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a[n - 1] > b[m - 1]) 
	  {
        cout << -1;
        return 0;
    }
    int j = m - 1, ans = 0;
    for(int i = n - 1; i >= 0; i--) 
	  {
        if(a[i] <= b[j] && j >= 0) 
			      j--;
        else 
			      ans += 2;
    }
    cout << ans + 1;
    return 0;
}
