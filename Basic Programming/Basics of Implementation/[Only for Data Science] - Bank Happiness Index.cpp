/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
	{
        long long int id, e, w, r;
        float h;
        cin >> id >> e >> w >> h >> r;
        if(2 * w > r)
         	cout << -1 << " " << -1 << endl;
        else
         	cout << e - 10 << " " << (i / k + 1) << endl;
    }
    return 0;
}
