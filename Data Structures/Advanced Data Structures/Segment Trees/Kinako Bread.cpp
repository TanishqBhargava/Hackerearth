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
	int n, m, idx, l, r, tot = 0, cntL[100005], cntR[100005], A[100005], L[100005], R[100005];
	long long ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++) 
        cin >> A[i];
	for(int i = 1; i <= m; i++) 
        cin >> L[i] >> R[i];
	idx = l = r = 0;
	while(idx < n) 
    {
		while(l < n) 
        {
			if(tot == m) 
                break;
			cntL[A[l]]++;
			if(cntL[A[l]] == L[A[l]]) 
                tot++;
			l++;
			if(tot == m) 
                break;
		}
		while(r < n && cntR[A[r]] < R[A[r]]) 
        {
			cntR[A[r]]++;
			r++;
		}
		if(tot == m && l <= r) 
            ans += (long long)(r - l + 1);
		if(cntL[A[idx]] == L[A[idx]]) 
            tot--;
		cntL[A[idx]]--, cntR[A[idx]]--;
		idx++;
	}
	cout << ans << endl;
	return 0;
}
