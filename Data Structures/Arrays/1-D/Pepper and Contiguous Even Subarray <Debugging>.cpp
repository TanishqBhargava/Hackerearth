/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while(t--) 
    {
		int n;
		cin >> n;
		int a[n], ans = 0, cnt1 = 0;;
		for(int i = 0; i < n; i++)
            cin >> a[i];
		for(int i = 0; i < n; i++) 
        {
			if(a[i] % 2 == 0) 
				cnt1++;
			else 
				cnt1 = 0;
			ans = max(ans, cnt1);
		}
		if(ans == 0)
            cout << -1;
        else 
            cout << ans;
        cout << endl;
	}
}
