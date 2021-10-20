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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int c[m];
    for(int i = 0; i < m; i++)
        cin >> c[i];
    int b[100] = {0};
    for(int i = 0; i < m; i++)
	  {
        for(int j = 0; j < n; j++)
		    {
            if(c[i] - a[j] > 0)
                b[c[i] - a[j]]++;
        }
    }
    for(int i = 0; i < 100; i++)
	  {
        if(b[i] == n)
            cout << i << " ";
    }
	cout << endl;
}
