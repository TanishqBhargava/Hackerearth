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
    long long pow2[500005];
    pow2[0] = 1;
    for(int i = 1; i <= 500001; i++) 
    {
        pow2[i] = pow2[i - 1] + pow2[i - 1];
        if(pow2[i] >= 1000000007) 
            pow2[i] -= 1000000007;
    }
    int n, q, x, A[500005];
    char s[2];
    cin >> n >> q;
    assert(n <= 500000);
    assert(q <= 500000);
    for(int i = 0; i < n; i++) 
    {
        cin >> A[i];
        assert(A[i] >= 1 && A[i] <= 1000000000);
    }
    sort(A, A + n);
    while(q--) 
    {
        cin >> s >> x;
        assert(x >= 1 && x <= 1000000000);
        if(s[0] == '=') 
        {
            int idx2 = upper_bound(A, A + n, x) - A, idx1 = lower_bound(A, A + n, x) - A;
            idx2--;
            if(idx1 == n || A[idx1] > x) 
            {
                cout << "0" << endl;
                continue;
            }
            long long ans1 = pow2[idx1], ans2 = pow2[idx2 - idx1 + 1] - 1;
            if(ans2 < 0) 
                ans2 += 1000000007;
            cout << (ans1 * ans2) % 1000000007 << endl;
        }
        else if(s[0] == '<') 
        {
            int idx = lower_bound(A, A + n, x) - A;
            idx--;
            long long ans1;
            ans1 = pow2[idx + 1];
            cout << ans1 << endl;
        }
        else 
        {
            int idx = upper_bound(A, A + n, x) - A;
            long long ans1 = pow2[idx], ans2 = pow2[n - idx] - 1;
            if(ans2 < 0) 
                ans2 += 1000000007;
            cout << (ans1 * ans2) % 1000000007 << endl;
        }
    }
    return 0;
}
