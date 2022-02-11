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
	int A[101000], B[101000], n;
	long long ans = 0;
	cin >> n;
    for(int i = 1; i <= n; i++)
	{
		cin >> A[i] >> B[i];
		A[i] %= B[i];
	}
    for(int i = n; i; i--)
    {
        A[i] = (ans + A[i]) % B[i];
        if(A[i] != 0)
			ans += B[i] - A[i];
    }
    cout << ans << endl;
    return 0;
}
