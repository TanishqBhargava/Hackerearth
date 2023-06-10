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
	int t = 1, n;
	cin >> t;
	while(t--) 
    {
        cin >> n;
        vector<int> a, cnt(1007);
        for(int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if(cnt[x] < 2) 
                a.push_back(x);
            cnt[x]++;
        }
        n = ((int) a.size());
        sort(a.begin(), a.end(), greater<int>());
        int sum = accumulate(a.begin(), a.end(), 0), alex = 0;
        for(int i = 0; i < n; i += 2) 
            alex += a[i];
        cout << (alex > sum - alex ? "Alex" : "Bob") << "\n";
	}
	return 0;
}
