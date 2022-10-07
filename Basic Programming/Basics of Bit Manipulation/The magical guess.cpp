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
	long long t = 1;
	cin >> t;
	assert(1 <= t && t <= 1000000);
    while(t--)
    {
        long long R, W, X, Y, Z;
        cin >> R >> W >> X >> Y >> Z;
        long long val = (X + Y + Z - W - 4 * R);
        long long x = val % 13;
        assert(0 <= R && R <= 1000000000);
        assert(0 <= W && W <= 1000000000);
        assert(0 <= X && X <= 1000000000);
        assert(0 <= Y && Y <= 1000000000);
        assert(0 <= Z && Z <= 1000000000);
        long long ans = (val / 13) - R;
        cout << ans << "\n";
    }
	return 0;
}
