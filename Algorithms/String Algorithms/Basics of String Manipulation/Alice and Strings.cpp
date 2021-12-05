/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
    cin >> a >> b;
	assert((a.size() <= 1000000) && (b.size() <= 1000000));
	if(a.size() != b.size())
    {
        cout << "NO" << endl;
        return 0;
    }
	int n = a.size(), diff[n] = {0};
	for(int i = 0; i < n; i++)
        diff[i] = b[i] - a[i];
	bool p = (diff[n - 1] >= 0);
	for(int i = 0; i < n - 1; i++)
		p &= (diff[i] >= 0 && diff[i] >= diff[i + 1]);
	cout << (p ? "YES" : "NO") << endl;
}
