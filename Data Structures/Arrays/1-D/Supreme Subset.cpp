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
	int i, j, n, m, el, maxi, flag, mod, arr[100005];
    vector<int> ans;
    map<int, int> counter;
    cin >> n >> m;
    for(i = 0; i < n; i++)
	{
    	cin >> arr[i];
    	counter[arr[i] % m]++;
    }
    maxi = 0;
    for(auto el : counter)
    	maxi = max(maxi, el.second);
    sort(arr, arr + n);
    flag = 0;
    mod = 0;
    for(i = 0; i < n; i++)
	{
    	if(flag == 0 && counter[arr[i] % m] == maxi)
		{
    		flag = 1;
    		ans.push_back(arr[i]);
    		mod = arr[i] % m;
    	}
    	else if(flag == 1 && arr[i] % m == mod)
    		ans.push_back(arr[i]);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto el : ans)
    	cout << el << " ";
    cout << endl;
    return 0;
}
