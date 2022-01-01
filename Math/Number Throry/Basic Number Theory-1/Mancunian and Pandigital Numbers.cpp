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
    long long t, n, a;
    cin >> t;
    vector<string> v;
    string s = "";
    for(int i = 1; i <= 6; i++) 
    {
        s += to_string(i);
        do
        {
            v.push_back(s);
        }
		while(next_permutation(s.begin(), s.end()));
    }
    long long l, r, cnt[1000001];
    memset(cnt, 0, sizeof(cnt));
    for(long long i = 0; i < v.size(); i++)
     	cnt[stoi(v[i])]++;
	long long ans = 1;
	for(long long i = 2; i < 1000001; i++)
	{
		if(cnt[i] > 0)
			ans += 1;
		cnt[i]=ans;
	}
	while(t--)
    {
     	cin >> l >> r;
     	long long ans = 0;
     	cout << cnt[r] - cnt[l - 1] << endl;
    }
}
