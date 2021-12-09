/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long int n;
    cin >> n;
    vector<long long int>v(n);
    for(int i = 0; i < n; i++)
    	cin >> v[i];
    int q;
    cin >> q;
    long long int prod = 1;
    while(q--)
    {
        long long int x;
        cin >> x;
        prod = (prod * x) % 1000000007;
    }
    for(int i = 0; i < n; i++)
    	cout << v[i] / prod << " "; 
	return 0;
}
