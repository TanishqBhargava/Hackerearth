/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

struct custom_hash 
{
    static uint64_t splitmix64(uint64_t x) 
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const 
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
long long int subsetXOR(vector<long long int> piles, long long int n)
{
    long long int maxx = 0;
    for(long long int i = 0; i < n; i++) 
        maxx = max(maxx, piles[i]);
    long long int m = (1 << (long long int)(log2(maxx) + 1) ) - 1;
    long long int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(long long int i = 1; i <= n; i++)
        for (long long int j = 0; j <= m; j++)
            dp[i][j] = ((dp[i - 1][j] % 1000000007) + (dp[i - 1][j ^ piles[i - 1]] % 1000000007)) % 1000000007;
    return dp[n][0] % 1000000007;
}
 
int main()
{  
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long int t;
    cin >> t;
    while(t--) 
    {
        long long int n; 
        cin >> n;
        vector<long long int> arr;
        unordered_map<long long int, long long int> mapit;
        for(long long int i = 0; i < n; i++) 
        {
            long long int x;
            cin >> x;
            arr.push_back(x);
            mapit[x]++;
        }
        vector<long long int> piles;
        for(auto it = mapit.begin(); it != mapit.end(); it++) 
            piles.push_back(it->second);
        cout << subsetXOR(piles, piles.size()) << endl;
    }
    return 0;
}
