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
    long long t, n, a, b, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n >> a >> b;
        x = round((double) (n * b) / (double) ((a + b)));
        y = n - x;
        long long ans = a * x * x + b * y * y;
        cout << ans << endl;
    }
}
