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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int A[n], sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> A[i];
            if(A[i] >= pow(2, n) / 2)
                sum += A[i];
        }
        cout << sum % 1000000007 << endl;
    }
    return 0;
}
