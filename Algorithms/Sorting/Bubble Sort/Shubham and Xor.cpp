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
    int n;
	  cin >> n;
    long int A[n], k = 0, sum = 0;
    for(int i = 0; i < n; i++)
		cin >> A[i];
    sort(A, A + n);
    for(int i = 0; i < n - 1; i++)
	  {
        k = 1;
        while(A[i] == A[i + 1] && i < n - 1)
		    {
            k++;
            i++;
        }
        sum += (((k) * (k - 1)) / 2);
    }
    cout << sum << endl;    
    return 0;
}
