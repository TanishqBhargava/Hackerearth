/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++)
    	cin >> h[i];
    sort(h, h + n);
    int diff[n];
    diff[0] = h[n - 1] - h[n - 2];
    diff[1] = h[1] - h[0];
    for(int i = 2; i < n; i++)
        diff[i] = h[i] - h[i - 2];
    sort(diff, diff + n);
    cout << diff[n - 1] << endl;
}
