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
    int a = 1000000, array2[1000007] = {0}, n, l, r;
    cin >> n;
    long long int sum = 0;
    while(n--)
    {
        cin >> l >> r;
        array2[l] += 1;
        array2[r + 1] -= 1;
    }
    for(int i = 1; i <= a; i++)
        array2[i] += array2[i-1];
    for(int i = 1; i <= a; i++)
    {
        if(array2[i] == 0)
            sum += i;
    }
    cout << sum << endl;
}
