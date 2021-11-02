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
    int n, k;
	  cin >> n >> k;
    int A[n], sum = 0;
    for(int i = 0; i < n; i++)
		    cin >> A[i];
    sort(A, A + n, greater<int>());
    for(int i = k; i < n; i++)
        sum += A[i];
    cout << sum << endl;
    return 0;
}
