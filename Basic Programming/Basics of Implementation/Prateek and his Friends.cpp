/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin >> t;
    while(t--)
	{
        long n, x;
        cin >> n >> x;
        long A[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> A[i];
        long sum = 0, c = 1, c1 = 0;
        for(int i = 1; i <= n; i++)
		{
            sum += A[i];
            while(sum > x)
			{
                sum -= A[c];
                c++;
            }
            if(sum == x)
			{
                c1++;
                cout << "YES" << endl;
                break;
            }
        }
        if(c1 == 0)
            cout << "NO" << endl;
    }
    return 0;
}
