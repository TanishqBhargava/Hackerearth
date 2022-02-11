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
    long long int n, res = LONG_MAX;
    cin >> n;
    vector<long long int>v(n);
    for(int i = 0; i < n; ++i)
    	cin >> v[i];
    for(int i = 0; i < n; ++i)
    {
        long long int temp = 0;
        for(int j = 0; j < n; ++j)
            temp += min(v[j], abs(v[i] - v[j]));
        res = min(res, temp);
    }
    cout << res << endl;
}
