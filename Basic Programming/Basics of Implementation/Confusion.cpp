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
	unsigned n, q;
	cin >> n >> q;
 	vector<unsigned> a(n);
	for(unsigned i = 0; i < n; i++)
		cin >> a[i];
	set<unsigned> s;
	vector<unsigned> u(n);
	for(unsigned i = n; i > 0; i--) 
    {
		s.insert(a[i - 1]);
		u[i - 1] = s.size();
	}
 	while(q--) 
    {
	    unsigned l;
		cin >> l;
 		cout << u[l - 1] << "\n";
	}
 	return 0;
}
