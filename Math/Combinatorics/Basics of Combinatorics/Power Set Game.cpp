/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;  
vector<long long> pw(2002);
 
void solution() 
{
    long long n;
    cin >> n;
    cout << (pw[2 * n] - pw[n] + 1000000007) % 1000000007 << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.precision(12);
    pw[0] = 1;
    for(int i = 1; i < 2002; ++i) 
		pw[i] = (pw[i - 1] * 2) % 1000000007;
    long t = 1;
    cin >> t;
    while(t--)
        solution();
    return 0;
}
