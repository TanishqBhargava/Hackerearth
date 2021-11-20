/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
long long findlen(string& A, long long n, long long k, char ch)
{
    long long maxlen = 1, cnt = 0, lo = 0, high = 0;
    while(high < n)
    {
        if(A[high] != ch)
            cnt++;
        while(cnt>k)
        {
            if(A[lo] != ch)
                cnt--;
            lo++;
        }
        maxlen = max(maxlen, high - lo + 1);
        high++;
    }
    return maxlen;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long maxlen = 1;
    maxlen = max(maxlen, findlen(s, n, k, 'a'));
    maxlen = max(maxlen, findlen(s, n, k, 'b'));
    maxlen = max(maxlen, findlen(s, n, k, 'c'));
    cout << maxlen << endl; 
}
