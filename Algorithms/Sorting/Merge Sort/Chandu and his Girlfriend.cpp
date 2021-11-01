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
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        sort(A, A + n);
        for(int i = 0; i < n; i++)
            cout << A[n - 1 - i] << " ";
        cout << endl;
    }
    return 0;
}
