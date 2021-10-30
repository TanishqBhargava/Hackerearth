/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	  int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    sort(A, A + n);
    sort(B, B + n);
    for (int i = 0; i < n; i++)
    {
        if (A[i] < B[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
