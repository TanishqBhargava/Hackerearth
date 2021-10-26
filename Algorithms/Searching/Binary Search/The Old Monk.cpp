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
    int tc, n, i, j, mx;
	  long long A[100000], B[100000];
    cin >> tc;
    while(tc--)
	  {
        cin >> n;
        for(int i = 0; i < n; i++) 
			      cin >> A[i];
        for(int i = 0; i < n; i++) 
			      cin >> B[i];
        i = 0, j = 0, mx = 0;
        while(i < n && j < n)
		    {
            if (B[j] >= A[i])
			      {
                mx = max(mx, j - i);
                j++;
            }
            else 
				        i++;
        }
        cout << mx << endl;
    }   
}
