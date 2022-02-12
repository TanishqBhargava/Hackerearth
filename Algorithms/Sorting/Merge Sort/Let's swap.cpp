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
    int n, ans = 0, mxl = -1;
	cin >> n;
    int mnr = n;
    for(int i = 0; i < n; i++)
	{
        int d;
		cin >> d;
		d --;
        ans += abs(d - i);
        int l = i, r = d;
        if(l > r)
            swap(l, r);
        mnr = min(mnr, r);
        mxl = max(mxl, l);
    }
    if(mxl > mnr)
        ans += 2 * (mxl - mnr);
    cout << ans << endl;
}
