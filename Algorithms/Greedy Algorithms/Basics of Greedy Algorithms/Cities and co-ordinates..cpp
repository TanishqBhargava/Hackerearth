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
		long long int x[n], y[n];
		for(int i = 0; i < n; i++) 
            cin >> x[i] >> y[i];
		long long int length = *max_element(x, x + n) - *min_element(x, x + n), breadth = *max_element(y, y + n) - *min_element(y, y + n);
		unsigned long long int res = ((unsigned long long int)max(length, breadth)) * ((unsigned long long int)max(length, breadth));
		cout << res << endl;
	}
	return 0;
}
