/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++) 
        cin >> a[i];
    for(int i = 1 ; i <= n - 1 ; i++)
        cout << i << " " << i + 1 << endl;
}
