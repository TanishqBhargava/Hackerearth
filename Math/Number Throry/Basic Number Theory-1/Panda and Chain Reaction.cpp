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
	unsigned long long int a[1000004];
	a[0] = 1;
    for(unsigned long long int i = 1; i <= 1000003; i++)
        a[i] = (i * a[i - 1]) % 1000003;
    unsigned long long int t; 
	cin >> t;
    while(t--)
    {
        unsigned long long int x, y; 
		cin >> y >> x; 
        if(y > 1000003)
			cout << "0" << endl;
        else
        	cout << (x * a[y]) % 1000003 << endl;
    }
}
