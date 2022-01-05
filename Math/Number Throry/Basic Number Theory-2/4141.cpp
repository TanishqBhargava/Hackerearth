/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int ans, t, c, n, i;
    cin >> t;
	long long arr[50005];
    while(t--)
    {
        ans = 0;
        cin >> arr[0] >> arr[1] >> c >> n;
        for(i = 2; i < n; i++)   
            arr[i] = (arr[i - 1] * c + arr[i - 2]) % 10;
        for(i = 0; i < n; i++)    
            ans = ((ans * 10) + arr[i]) % 41;
        ans % 41 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
