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
    int n, i, a[1500] = {0};
    cin >> n;
    for(i = 0; i < n; i++)
    {
        int h1, m1, h2, m2;
        cin >> h1 >> m1 >> h2 >> m2;
        a[h1 * 60 + m1]++;
        a[h2 * 60 + m2 + 1]--;
    }
    int MAX = 0;
    for(i = 1; i < 1500; i++)
    {
        a[i] += a[i - 1];
        MAX = max(MAX, a[i]);
    }
    cout<<MAX;
}
