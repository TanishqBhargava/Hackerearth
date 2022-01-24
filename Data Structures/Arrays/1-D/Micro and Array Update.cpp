/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n, k, min, temp;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> min;
        for(int i = 1; i < n; i++)
        {
            cin >> temp;
            if(temp < min) 
				min = temp;
        }
        int ans = k - min;
        cout << (ans > 0 ? ans : 0) << endl;
    }
    return 0;
}
