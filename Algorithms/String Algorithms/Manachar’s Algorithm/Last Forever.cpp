/*========================*\
|  ID: tanishqbhargava2509 |
|  LANG: C++               |
\*========================*/
//Tanishq Bhargava
#include<bits/stdc++.h>
using namespace std;
string ss;
int64_t ans[200005];
int n, m, p[200005];

struct Q
{
    int qi, id;
};vector<Q> q[200005];
     
struct bit
{
  	int64_t ar[200005];
   	bit()
    { 
        fill(ar, ar + 200005,0);
    }
   	int64_t query(int64_t x)
    {
   		int64_t res = 0; 
   		while(x) 
        {
            res += ar[x];
            x -= (x & -x);
        }
   		return res;
   	}
   	void update(int64_t x, int64_t by)
    { 
        while(x <= n + 1) 
        {
            ar[x] += by; 
            x += (x & -x);
        }    
    }
} bb;
   
int main() 
{
   	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
   	int ii, len;
   	cin >> ss;
   	string s="|";
   	for(auto x:ss) 
    {
        s.push_back(x); 
        s.push_back('|');
    }
   	n = s.size();
   	int m = 0, r = 0;
   	for(int i = 1; i < n; i++)
    {
   		p[i] = (r > i) ? min(p[m - (i - m)], r - i) : 0;
   		while(i - p[i] >= 1 && s[i + 1 + p[i]] == s[i - 1 - p[i]]) 
            p[i]++;
   		if(i + p[i] > r) 
        {    
            r = i + p[i];
            m = i;
        }
   	}
   	cin >> m;
   	for(int i = 0; i < m; i++)
    {
   		cin >> ii >> len;
   		ii = ii * 2 + 1;
   		if(ii + len - 1 < n) 
           q[ii + len - 1].push_back({ii, i});		
   		ans[i] = 0;
   	}
   	for(int i = n - 2; i; i--)
    {
   		bb.update(i - p[i] + 1, 1);
   		for(auto &qq : q[i]) 
            ans[qq.id] = bb.query(qq.qi + 1);
   	}
   	for(int i = 0; i < m; i++) 
        cout << ans[i] << endl;
   	return 0;
}
