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
	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		vector<long long> v(n, 0);
		for(long long i = 0; i < n; i++)
			cin >> v[i];
		reverse((v).begin(), (v).end());
		long long ans = 1;
		vector<long long> store;
		store.push_back(v[0]);
		for(long long i = 1; i < v.size(); i++)
		{
			auto itr = lower_bound((store).begin(), (store).end(), v[i]);
			if(itr == store.end())
				store.push_back(v[i]);
			else
				*itr = v[i];
		}
		cout << store.size() << endl;
	}
}
