/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
	  cin >> n;
    unordered_set<int>s;
    for(int i = 0; i < n; i++)
	  {
        int x;
		    cin >> x;
        s.insert(x);
    }
    long long int x = s.size();
    cout << ((x) * (x - 1)) / 2 << endl;
    return 0;
}
