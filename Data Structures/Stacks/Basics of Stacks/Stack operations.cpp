/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, k;
    cin >> n >> k;
    long long x, a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(n == 1)
    {
        if(k % 2 == 0)
            cout << a[0];
        else
            cout << "-1";
        return 0;
    }
    if(k == 1)
        cout << a[1];
    else if(k < n)
        cout << max(*max_element(a, a + k - 1), a[k]);
    else if(k == n)
        cout << *max_element(a, a + n - 1);
    else
        cout << *max_element(a, a + n);
}
