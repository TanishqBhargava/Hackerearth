/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include "bits/stdc++.h"
using namespace std;

signed main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int TC = 1, i, j;
    cin >> TC;
    while (TC--) 
	  {
        long long int n, k, m;
        cin >> n;
        vector<int> a(n);
        for(i = 0; i < n; i++) 
			  cin >> a[i];
        int ones = count(a.begin(), a.end(), 1);
        // cnt of ones should be divisible by 3
        bool ok = ones % 3 == 0; 
        if (!ok) 
		    {
            cout << -1 << endl;
            continue;
        } 
        int st, mid, en, cnt = 0;
        i = 0;
        k = count(a.begin(), a.end(), 1) / 3;
        // We find the starting index of one in all three subarray i.e st, mid, end
        while (cnt < 1 && i < n) 
			      cnt += a[i] == 1, i++;
        st = i - 1;
        while (cnt < (k + 1) && i < n) 
			      cnt += a[i] == 1, i++;
        mid = i - 1;
        while (cnt < (2 * k + 1) && i < n) 
			      cnt += a[i] == 1, i++;
        en = i - 1;
        // We match the subarrays
        while (en < a.size() && a[st] == a[mid] && a[mid] == a[en])
            st++, mid++, en++;
        if (en == a.size()) 
		    {  
            // If all are matched we find the binary equivalent
            long long int res = 0;
            // we can consider any subarray, here I have considered middle subarray
            // notice that st will now point to start of middle subarray
            for (i = st; i < mid; i++) 
			      {
                (res *= 2) %= 1000000007;
                (res += a[i]) %= 1000000007;
            }
            cout << res << endl;
        }
        else 
			      cout << -1 << endl;
    }
}
