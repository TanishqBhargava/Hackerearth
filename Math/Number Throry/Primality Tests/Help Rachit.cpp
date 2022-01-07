/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector<int> dp(10005);

bool isPrime(int n)
{
    if(n == 0 or n == 1) 
        return 0;
    for(int i = 2; i * i <= n; i++) 
        if(n % i == 0) 
            return 0;
    return 1;
}

void preCompute()
{
    long long ans = 0;
    for(int i = 1; i + 2 < 10005; i += 2)
    {
        long long x = i * i;
        for(int j = 0; j < 3; j++)
        {
            x += (i + 1);
            if(isPrime(x)) 
                ans++;    
        }
        dp[i + 2] = ans;
    }
}

int main()
{
    int t; 
    cin >> t;
    preCompute();
    while(t--)
    {
        int n; 
        cin >> n;
        int ans = dp[n];        
        double res = ((double)ans * 100) / (2 * n - 1);
        cout << fixed << setprecision(6) << res << endl;
    }
}
