/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(NULL);
    int t, n;
	long long cur = 0;
    vector<long long> tri_nums;
	for(long long i = 1; cur + i <= 1000000000000; i++) 
    {
		cur += i;
		tri_nums.push_back(cur);
	}
	n = tri_nums.size();
	cin >> t;
	while(t--) 
	{
        long long l, r;
        cin >> l >> r;
        int low = lower_bound(tri_nums.begin(), tri_nums.end(), l - 1) - tri_nums.begin(), high = upper_bound(tri_nums.begin(), tri_nums.end(), r - 1) - tri_nums.begin();
        long long res = 1LL * (high - low);
        for(int i = 1; i < n; i++) 
        {
            while(low && tri_nums[i] + tri_nums[low - 1] >= l) 
                low--;
            while(high && tri_nums[i] + tri_nums[high - 1] > r) 
                high--;
            if(!high || high <= i) 
                break;
            res += 1LL * (high - max(low, i));
        }
        cout << res << endl;
    }
	return 0;
}
