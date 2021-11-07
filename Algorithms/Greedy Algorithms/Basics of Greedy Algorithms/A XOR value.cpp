/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int T, N;
    cin >> T;
    while(T-- > 0) 
	  {
        cin >> N;
        long long x;
        vector<int> one(64);
        for (int i = 0; i < N; i++) 
		    {
            cin >> x;
            for (int j = 0; x; j++, x >>= 1) 
                one[j] += int(x & 1);
        }
        long long ans = 0;
        for (int i = 0; i < 63; i++) 
		    {
            if (one[i] > N - one[i])
                ans |= 1ll << i;
        }
        cout << ans << endl;
    }
    return 0;
}
