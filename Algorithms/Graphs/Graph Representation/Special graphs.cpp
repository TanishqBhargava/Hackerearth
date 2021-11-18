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
    int a[1000001] = {0}, i, j;
    a[0] = a[1] = 1;
    for(i = 2; i * i <= 1000000; i++)
    {
        if(a[i] == 0)
        {
            for(j = i * i; j <= 1000000; j += i)
                a[j] = 1;
        }
    }
    int cnt = 0;
    for(i = 0; i <= 1000000; i++)
    {
        if(a[i] == 0)
            cnt++;
        a[i] = cnt;
    }
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}
