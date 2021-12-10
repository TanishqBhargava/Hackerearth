/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
int n , x, a[100005];
 
bool good(int mid)
{
    for(int i = 0 ; i <= (n - mid); i++)
	{
        int kor = 0;
        for(int j = i ; j < (mid + i); j++)
            kor |= a[j];
        if(kor >= x)
			return true;
    }
    return false;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; 
	cin >> t;
    while(t--)
	{
        cin >> n >> x;
        for(int i = 0 ; i < n; i++)cin >> a[i];
        int temp = -1, left = 1 , right = 2*n - 1;
        while(left < right)
		{
            int mid = (left + right)/2;
            if(good(mid))
                right = mid;
            else
                left = mid+1;
        }
        if(right > n)
			cout << 0 << endl;
        else
		{
            int cnt = 0 ;
            vector<pair<int ,int>> ans;
            for(int i = 0 ; i <= (n - right); i++)
			{
                int kor = 0;
                for(int j = i ; j < (right+i); j++)
                    kor |= a[j];
                if(kor >= x)
				{
                    cnt++;
                    ans.push_back({i+1, (right + i)});
                }
            }
            cout << cnt << endl;
            for(auto it : ans)
                cout << it.first << " " << it.second << endl;
        }
    }
	return 0;
}
