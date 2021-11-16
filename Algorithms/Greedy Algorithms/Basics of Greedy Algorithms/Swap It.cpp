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
        int n, k, i, j;
        cin >> n >> k;
        int a[n];
        for(i = 0; i < n; i++)
        	cin >> a[i];
        for(i = 0; i < n - 1 && k > 0; i++)
        {   
			int pos = i;
            for(j = i + 1; j < n; j++)
            {
                if(j - i > k)
                	break;
                if(a[j] < a[pos])
                	pos = j;
            }
            for(j = pos; j > i; j--)
            	swap(a[j], a[j - 1]);
            k -= pos - i;
        }
        for(i = 0; i < n; i++)
        	cout << a[i] << " ";
        cout << endl;
    }
}
