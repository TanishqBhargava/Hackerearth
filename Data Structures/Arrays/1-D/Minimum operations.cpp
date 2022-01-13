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
	int n, c = 1;
    cin >> n;
    int a[n];
    cin >> a[0];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        if(a[i - 1] != a[i])
            c++;
    }
    cout << c;
    return 0;
}
