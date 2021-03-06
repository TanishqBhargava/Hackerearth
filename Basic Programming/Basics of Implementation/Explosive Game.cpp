/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include <bits/stdc++.h>
using namespace std;
vector<int>v;
long long can;

int main() 
{
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++) 
	{
        int aa, bb;
        cin >> aa >> bb;
        if(aa > bb) 
			swap(aa, bb);
        v.push_back(bb - aa);
        can += aa;
    }
    bool fl = true;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i += 2) 
	{
        if(v[i] != v[i + 1]) 
            fl = false;
        else 
            can += v[i];
    }
    for (int i = 0; i < q; i++) 
	{
        long long x;
        cin >> x;
        if (fl == true && x == can) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
