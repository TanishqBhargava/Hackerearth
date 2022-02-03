/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
bool check (int *a, int k, int n, int n_, int mid) 
{
    int i = 0, li = 0;
    while(k--) 
    {
        i = upper_bound(a, a + n, a [i] + mid) - a - 1;
        if(i == n_) 
            return true;
        else if(i == li) 
            return false;
        li = i;
    }
    return false;
}
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int i, k, n, n_, t, hi, lo, mid;
    cin >> t;
    while(t--) 
    {
        cin >> n >> k;
        int a[n];
        for(i = 0; i < n; ++i) 
            cin >> a [i];
        n_ = n - 1;
        hi = a [n - 1];
        lo = 1;
        while(lo < hi) 
        {
            mid = (lo + hi) / 2;
            if(check (a, k, n, n_, mid)) 
                hi = mid;
            else 
                lo = mid + 1;
        }
    	cout << hi << endl;
    }
    return 0;
}
