/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, l;
    long long int a[100006], b[100006], c[100006], d[100006];
    map<int, int> indx;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
        indx[a[i]] = i;
    for(int i = 0; i < m; i++)
	{
        int x = b[i];
        if(indx.find(x) != indx.end())
		{ 
            cout << 1 << endl << indx[x] + 1 << endl << i + 1 << endl;
            exit(0);
        }
    }
    cout << 0 << endl;
    exit(0);
    return 0;
}
