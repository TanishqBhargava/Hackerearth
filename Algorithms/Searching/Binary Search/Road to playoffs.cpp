/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
long long int a[200040], b[200040], c[200040], ans, sum;
 
void testcase()
{
    long long int n, m, k, b;
    cin >> n >> m >> k >> b;
    vector<long long int>a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    int l = b - 1, r = n;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        long long int cc = m * (k - (b - 1) - (n - mid));
        for(int i = b - 1; i < mid; i++)
        {
            if(a[i] > a[mid] + m) 
                cc = LLONG_MAX;
            else 
                cc -= (a[mid] + m - a[i]);
        }
        if(cc > 0) 
            r = mid;
        else 
            l = mid, ans = mid + 1;
    }
    cout << l + 1 << endl;
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
    long long int test = 1;
    cin >> test; 
    while(test--)
        testcase();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms" << endl;
    return 0;
}
