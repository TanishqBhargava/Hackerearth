/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n;
	  cin >> t;
    while(t--)
	  {
		    cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
			      cin >> A[i];
        sort(A, A + n);
        cout << A[0] + A[n - 1] << endl;
    }
    return 0;
}
