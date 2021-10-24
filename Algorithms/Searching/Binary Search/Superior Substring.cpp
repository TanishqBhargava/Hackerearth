/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
void test_case() 
{
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int c = 0; c < 26; ++c) 
    {
        vector<int> F(n), L(n), R(n), A(n);
        int ct = 0, mn = 1e9 + 1;
        for(int i = 0; i < n; ++i) 
        {
            if(s[i] - 'a' == c) 
                ct++;
            F[i] = ct;
            R[i] = 2 * F[i] - i;
            if(i > 0) 
                L[i] = 2 * F[i - 1] - i;
            mn = min(mn, L[i]);
            A[i] = mn;
        }
        for(int i = 0; i < n; ++i) 
        {
            int l = 0, r = i;
            while(l <= r) 
            {
                int mid = (l + r) / 2;
                if(A[mid] <= R[i]) 
                {
                    ans = max(ans, i - mid + 1);
                    r = mid - 1;
                }
                else l = mid + 1;
            }
        }
    }
    cout << ans << endl;
}
 
int main() 
{
    ios::sync_with_stdio(0), cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--) 
        test_case();
    return 0;
}
